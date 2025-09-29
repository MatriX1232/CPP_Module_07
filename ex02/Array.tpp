#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(NULL), n(0) {}

template <typename T>
Array<T>::Array(unsigned int size) : arr(new T[size]()), n(size) {}

template <typename T>
Array<T>::Array(const Array& other) : arr(NULL), n(0) {
    *this = other;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this == &other)
        return *this;
    delete[] arr;
    n = other.n;
    arr = n ? new T[n] : NULL;
    for (unsigned int i = 0; i < n; ++i)
        arr[i] = other.arr[i];
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] arr;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= n)
        throw std::out_of_range("Array index out of bounds");
    return arr[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= n)
        throw std::out_of_range("Array index out of bounds");
    return arr[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return n;
}