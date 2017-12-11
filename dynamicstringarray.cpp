/*------------------------------------------------------------------------
This is the implementation for the class DynamicStringArray. The interface
is in the file dynamicstringarray.h.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
------------------------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
#include <string>
#include "dynamicstringarray.h"

using namespace std;

DynamicStringArray::DynamicStringArray() :size(0), dynamicArray(NULL) {}

DynamicStringArray::DynamicStringArray(const DynamicStringArray& otherDSArray) :size(otherDSArray.size)
{
    dynamicArray = new string[size];
    for (int i = 0; i < size; i++)
        dynamicArray[i] = otherDSArray.dynamicArray[i];
}

void DynamicStringArray::addEntry(const string& element) 
{
    string *temp = new string[size + 1];
    for (int i = 0; i < size; i++)
        temp[i] = dynamicArray[i];  

    temp[size] = element;

    size++;
    delete [] dynamicArray;
    dynamicArray = temp;
}

bool DynamicStringArray::deleteEntry(const string& targetElement)
{
    bool foundEntry = false;

    for (int i = 0; i < size; i++)
    {
        if (dynamicArray[i] == targetElement)
        {
            foundEntry = true;
            break;
        }
    }

    if (!foundEntry)
    {
        return false;
    }
    else
    {
        string *temp = new string[size - 1];
        int tempIndex = 0;

        for (int i = 0; i < size; i++)
        {
            if (dynamicArray[i] != targetElement)
            {
                temp[tempIndex] = dynamicArray[i];
                tempIndex++;
            } 
        }

        size--;
        delete [] dynamicArray;
        dynamicArray = temp;

        return true;
    }
}

const string DynamicStringArray::getEntry(int index) const  
{
    if (index >= size)
    {
        cout<<"Error: Attempt to exceed size in DynamicStringArray\n";
        exit(1);
    }        
    else
        return dynamicArray[index];
}

DynamicStringArray& DynamicStringArray::operator =(const DynamicStringArray& rightSide)
{
    if (size != rightSide.size)
    {
        delete [] dynamicArray;
        dynamicArray = new string[rightSide.size];
    }

    size = rightSide.size;
    for (int i = 0; i < size; i++)
        dynamicArray[i] = rightSide.dynamicArray[i];

    return *this;
}

DynamicStringArray::~DynamicStringArray()
{
    delete [] dynamicArray;
} 
