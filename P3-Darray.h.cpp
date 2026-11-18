
#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

class DArray {
private:
    int* arr;
    int size;
    int cap;

public:
    DArray();
    DArray(const DArray& other);
    ~DArray();

    void push_back(int value);
    int size();
    int capacity();

    int& operator[](int index);
    int operator[](int index) const;

    bool operator==(const DArray& other) const;

    friend ostream& operator<<(ostream& out, const DArray& obj);
};

#endif
