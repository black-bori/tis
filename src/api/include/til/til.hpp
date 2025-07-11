#pragma once

#include <cstdint>
#include <string>

#ifdef _WIN32
#ifdef TIL_EXPORTS
#define TIL_API __declspec(dllexport)
#else
#define TIL_API __declspec(dllimport)
#endif
#else
#define TIL_API __attribute__((visibility("default")))
#endif

namespace til {

class TIL_API TesterOnly {
public:
    TesterOnly(int32_t a, int32_t b);
    ~TesterOnly() = default;

    int32_t add() const;
    int32_t mul() const;

private:
    int32_t __a;
    int32_t __b;
};
class TIL_API Model {
public:
    Model(const std::string& model_path);
    ~Model();

    std::string get_model_path() const;

private:
    std::string __model_path;
};

};

extern "C" {

TIL_API uint32_t add(uint32_t a, uint32_t b);

}
