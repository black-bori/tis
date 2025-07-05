#include "til/til.hpp"
#include <iostream>

int main() {
    uint32_t a = 1;
    uint32_t b = 2;
    uint32_t result = add(a, b);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}