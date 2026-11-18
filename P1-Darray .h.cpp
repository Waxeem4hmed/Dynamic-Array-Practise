
#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

class DArray {
    int* arr;
    int size;

public:
    DArray();
    ~DArray();


    DArray& operator=(const DArray& other);

    ostream& operator<<(ostream& out, const DArray& obj);
};

