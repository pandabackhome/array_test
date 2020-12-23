#pragma once
#include <iostream>

using namespace std;

class Array
{
public:
    Array(int length);
    Array(const Array& obj);
    ~Array();
public:
    void setData(int index, int value);
    int getData(int index);
    int length();
private:
    int m_length;
    int* m_space = NULL;

public:
    //重载=
    Array& operator=(Array &obj);
    int& operator[](int i);
    bool operator==(Array &obj);
    bool operator!=(Array &obj);
    friend ostream& operator<<(ostream &cout, Array &obj);
    friend istream& operator>>(istream &cin, Array &obj);
};


// Array(3)
// Array a = b
//