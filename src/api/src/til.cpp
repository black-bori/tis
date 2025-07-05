#include "til/til.hpp"

extern "C" {
TIL_API uint32_t add(uint32_t a, uint32_t b) {
        return a + b;
    }
}