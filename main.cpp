// #pragma once
#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    Array array1(10);

    for (int i = 0; i<array1.length(); i++)
    {
        array1.setData(i, i);
    }

    for (int i = 0; i<array1.length(); i++)
    {
        cout << array1.getData(i) << ",";
    }
    cout << endl;

    Array array2 = array1;

    for (int i = 0; i<array2.length(); i++)
    {
        cout << array2.getData(i) << ",";
    }
    cout << endl;

    Array array3(5);

    array3 = array2 = array1;
    for (int i = 0; i<array3.length(); i++)
    {
        cout << array3.getData(i) << ",";
    }
    cout << endl;

    if (array1 == array2)
    {
        cout << "same array" << endl;
    }
    else
    {
        cout << "not same array" << endl;
    }

    if (array1 != array2)
    {
        cout << "not same array" << endl;
    }
    else
    {
        cout << "same array" << endl;
    } 
    
    cout << array3 << array2 << array1 << endl;

    Array array4(20);
    cin >> array4;
    cout << array4 << endl;

    return 0;
}
