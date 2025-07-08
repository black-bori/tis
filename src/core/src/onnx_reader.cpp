#include <iostream>
#include "onnx_reader.hpp"
#include "onnx.pb.h"
#include <google/protobuf/stubs/common.h>

OnnxReader::OnnxReader(const std::string& model_path)
    : __model_path(model_path) {
    // Verify that the version of the library that we linked against is
    // compatible with the version of the headers we compiled against.
    GOOGLE_PROTOBUF_VERIFY_VERSION;
}

OnnxReader::~OnnxReader() {
    // Optional:  Delete all global objects allocated by libprotobuf.
    // This is not strictly necessary on program exit, as the OS will reclaim
    // all memory. However, it's good practice if you need to check for
    // memory leaks or if your library is dynamically unloaded.
    google::protobuf::ShutdownProtobufLibrary();
}

void OnnxReader::print_onnx_model() {
    std::cout << "print_onnx_model: " << __model_path << std::endl;
}
