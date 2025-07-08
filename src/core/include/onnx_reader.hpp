#include <string>

class OnnxReader {
public:
    OnnxReader(const std::string& model_path);
    ~OnnxReader();

    void print_onnx_model();

private:
    std::string __model_path;
};
