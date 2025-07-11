#include "til/til.hpp"
#include <iostream>

extern "C" {

til::TesterOnly::TesterOnly(int32_t a, int32_t b) :
__a(a),
__b(b) {
}

int32_t til::TesterOnly::add() const {
    return __a + __b;
}

int32_t til::TesterOnly::mul() const {
    return __a * __b;
}

til::Model::Model(const std::string& model_path) :
    __model_path(model_path) {
}

til::Model::~Model() {
}

std::string til::Model::get_model_path() const {
    return __model_path;
}

TIL_API uint32_t add(uint32_t a, uint32_t b) {
        return a + b;
}

}