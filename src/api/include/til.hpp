#pragma once

#include <cstdint>

#ifdef TIL_EXPORTS
#define TIL_API __declspec(dllexport)
#else
#define TIL_API __declspec(dllimport)
#endif

extern "C" {
    TIL_API uint32_t add(uint32_t a, uint32_t b);
}
