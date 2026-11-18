
#include "DArray.h"

DArray::DArray() {
    arr = nullptr;
    size = 0;
    cap = 0;
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

ostream& operator<<(ostream& out, const DArray& obj) {
    for (int i = 0; i < obj.size; i++) {
        out << obj.arr[i] << " ";
    }

    return out;
}
