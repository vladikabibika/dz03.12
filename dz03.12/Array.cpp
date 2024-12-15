#include "Array.h"
#include <iostream>
using namespace std;

MyArray::MyArray()
{
    this->size = 0;
    this->arr = 0;
}

MyArray::MyArray(unsigned int size)
{
    this->size = size;
    if (size > 0)
    {
        this->arr = new int[this->size] {};
    }
    else
    {
        this->arr = 0;
    }
}

MyArray::MyArray(unsigned int size, int* arr)
{
    this->size = size;
    if (size > 0)
    {
        this->arr = new int[this->size];
        for (int i = 0; i < this->size; i++)
        {
            this->arr[i] = arr[i];
        }
    }
    else
    {
        this->arr = 0;
    }
}

MyArray::MyArray(const MyArray& obj)
{
    this->size = obj.size;
    if (this->size > 0)
    {
        this->arr = new int[this->size];
        for (int i = 0; i < this->size; i++)
        {
            this->arr[i] = obj.arr[i];
        }
    }
    else
    {
        this->arr = 0;
    }
}

MyArray::~MyArray()
{
    if (this->arr != 0)
    {
        delete[] arr;
    }
}

void MyArray::printArray() const
{
    if (this->size > 0)
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << this->arr[i] << ' ';
        }
        cout << endl;
    }
    else
    {
        cout << "Array is empty((((((((((((((((((((()(())))())((((((((((((\n";
    }
}

void MyArray::setSize(unsigned int size)
{
    newSizeArray(size);
}

unsigned int MyArray::getSize() const
{
    return this->size;
}

int MyArray::findMax() const
{
    if (this->size == 0) {

        cout << ("Array is empty(((((((((((()))((((((((()())))))))))))(((((((((");

    }
    int maxVal = this->arr[0];
    for (int i = 1; i < this->size; i++)
    {
        if (this->arr[i] > maxVal)
        {
            maxVal = this->arr[i];
        }
    }
    return maxVal;
}


int MyArray::findMin() const
{
    if (this->size == 0) {

        cout << ("Array is empty(((((((((((()))((((((((()())))))))))))(((((((((");

    }
    int minVal = this->arr[0];
    for (int i = 1; i < this->size; i++)
    {
        if (this->arr[i] < minVal)
        {
            minVal = this->arr[i];
        }
    }
    return minVal;
}


void MyArray::sortArray()
{
    for (int i = 0; i < this->size - 1; i++)
    {
        for (int j = 0; j < this->size - i - 1; j++)
        {
            if (this->arr[j] > this->arr[j + 1])
            {
                this->arr[j] = this->arr[j + 1];
            }
        }
    }
}