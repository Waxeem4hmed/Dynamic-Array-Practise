
#include "DArray.h"

DArray::DArray() {
    arr = nullptr;
    size = 0;
    cap = 0;
}

DArray::DArray(const DArray& other) {
    size = other.size;
    cap = other.cap;

    arr = new int[cap];

    for (int i = 0; i < size; i++) {
        arr[i] = other.arr[i];
    }
}

DArray::~DArray() {
    delete[] arr;
}

void DArray::push_back(int value) {
    if (size == cap) {
        cap = (cap == 0) ? 1 : cap * 2;

        int* temp = new int[cap];

        for (int i = 0; i < size; i++) {
            temp[i] = arr[i];
        }

        delete[] arr;
        arr = temp;
    }

    arr[size] = value;
    size++;
}

int DArray::size() {
    return size;
}

int DArray::capacity() {
    return cap;
}

int& DArray::operator[](int index) {
    return arr[index];
}

int DArray::operator[](int index) const {
    return arr[index];
}

bool DArray::operator==(const DArray& other) const {
    if (size != other.size)
        return false;

    for (int i = 0; i < size; i++) {
        if (arr[i] != other.arr[i])
            return false;
    }

    return true;
}

ostream& operator<<(ostream& out, const DArray& obj) {
    for (int i = 0; i < obj.size; i++) {
        out << obj.arr[i] << " ";
    }

    return out;
}
