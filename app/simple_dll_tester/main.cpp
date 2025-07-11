#include "til/til.hpp"
#include <iostream>

int main() {
    uint32_t a = 1;
    uint32_t b = 2;
    uint32_t result = add(a, b);
    std::cout << "Result: " << result << std::endl;

    til::TesterOnly tester(3, 4);
    std::cout << "add: " << tester.add() << std::endl;
    std::cout << "mul: " << tester.mul() << std::endl;

    til::Model model("aaa.onnx");
    std::cout << model.get_model_path() << std::endl;
    
    return 0;
}