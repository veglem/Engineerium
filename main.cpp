#include <iostream>
#include "header.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Stack();
    std::cout << std::endl;

    Unordered_map();
    std::cout << std::endl;

    Unordered_multimap();
    std::cout << std::endl;

    Unordered_set();
    std::cout << std::endl;

    Unordered_multiset();



    return 0;
}
