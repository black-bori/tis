#pragma once

#include <cstdint>

#ifdef _WIN32
#ifdef TIL_EXPORTS
#define TIL_API __declspec(dllexport)
#else
#define TIL_API __declspec(dllimport)
#endif
#else
#define TIL_API __attribute__((visibility("default")))
#endif

extern "C" {

TIL_API uint32_t add(uint32_t a, uint32_t b);

TIL_API void print_onnx_model(const char* model_path);

}
