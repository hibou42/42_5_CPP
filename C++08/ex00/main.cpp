#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    vec.push_back(42);
    vec.push_back(2);
    vec.push_back(32);
    vec.push_back(12);

    try {
        std::vector<int>::iterator it = easyfind(vec, 2);
        std::cout << "Found: " << *it << std::endl;
    } catch (const NotFoundException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 100);
        std::cout << "Found: " << *it << std::endl;
    } catch (const NotFoundException& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
