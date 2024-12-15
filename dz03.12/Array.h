#pragma once

class MyArray
{
private:
    unsigned int size;
    int* arr;
public:
    MyArray();
    MyArray(unsigned int size);
    MyArray(unsigned int size, int* arr);
    MyArray(const MyArray& obj);
    ~MyArray();

    void printArray() const;
    void setSize(unsigned int size);
    unsigned int getSize() const;
    int findMax() const;
    int findMin() const;
    void sortArray();
};
