#include <iostream>

int main() {
    // Check for C++11
    #if __cplusplus >= 201103L
        std::cout << "C++11\n";
    #endif

    // Check for C++14
    #if __cplusplus >= 201402L
        std::cout << "C++14\n";
    #endif

    // Check for C++17
    #if __cplusplus >= 201703L
        std::cout << "C++17\n";
    #endif

    // Check for C++20
    #if __cplusplus >= 202002L
        std::cout << "C++20\n";
    #endif

    return 0;
}
