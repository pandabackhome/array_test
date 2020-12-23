// #pragma once
#include "Array.h"
#include <iostream>

using namespace std;

Array::Array(int length)
{
    if (length < 0)
    {
        length = 0;
    }
    m_length = length;
    m_space = new int[m_length];
}

Array::Array(const Array &obj)
{
    m_length = obj.m_length;
    m_space = new int[m_length];
    for (int i = 0; i<m_length; i++)
    {
        m_space[i] = obj.m_space[i];
    }
}
Array::~Array()
{
    if (m_space!=NULL)
    {
        delete [] m_space;
        m_space = NULL;
        m_length = -1;
    }
}
void Array::setData(int index, int value)
{
    this->m_space[index] = value;
}
int Array::getData(int index)
{
    return this->m_space[index];
}
int Array::length()
{
    return this->m_length;
}

Array& Array::operator=(Array &obj)
{
    if (m_space != NULL)
    {
        delete [] m_space;
        m_length = 0;
    }
    m_length = obj.m_length;
    m_space = new int[m_length];
    for (int i = 0; i<m_length; i++)
    {
        m_space[i] = obj.m_space[i];
    }
    return *this;
}

int& Array::operator[](int i)
{
    return m_space[i];
}

bool Array::operator==(Array &obj)
{
    if (m_length == obj.m_length)
    {
        for (int i = 0; i<m_length; i++)
        {
            if (m_space[i] != obj.m_space[i])
            {
                return false;
            }            
        }
        return true;
    }
    return false;
}

bool Array::operator!=(Array &obj)
{
    return !(*this == obj);
}

ostream& operator<<(ostream &cout, Array &obj)
{
    for (int i = 0; i < obj.m_length; i++)
    {
        cout << obj[i] << ",";
    }
    cout << endl;
    return cout;
}

// ?
istream& operator>>(istream &cin, Array &obj)
{
    for (int i = 0; i<obj.m_length; i++)
    {
        obj.m_space[i] = i + 10;
    }
    return cin;
}