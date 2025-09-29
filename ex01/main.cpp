#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printElement(T &element) {
    std::cout << element << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[] = {"Hello", "World", "This", "Is", "C++"};

    std::cout << "Integer array elements:" << std::endl;
    iter(intArray, 5, printElement);

    std::cout << "\nString array elements:" << std::endl;
    iter(strArray, 5, printElement);

    return 0;
}