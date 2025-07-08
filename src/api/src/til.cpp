#include "til/til.hpp"
#include <iostream>

extern "C" {

TIL_API uint32_t add(uint32_t a, uint32_t b) {
        return a + b;
}

TIL_API void print_onnx_model(const char* model_path) {
    std::cout << "print_onnx_model: " << model_path << std::endl;
}

}