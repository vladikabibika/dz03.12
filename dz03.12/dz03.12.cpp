#include "Array.h"
#include <iostream>
using namespace std;

int main() {

    MyArray array1;
    cout << "Array1 default: ";
    array1.printArray();

    MyArray array2(5);
    cout << "Array2 size 5: ";
    array2.printArray();

    int initArr[] = { 3, -1, 4, 1, 5 };
    MyArray array3(5, initArr);
    cout << "Array3 initialized: ";
    array3.printArray();

    cout << "Max Array3: " << array3.findMax() << endl;
    cout << "Min Array3: " << array3.findMin() << endl;

    array3.sortArray();
    cout << "Array3 sort: ";
    array3.printArray();


    return 0;