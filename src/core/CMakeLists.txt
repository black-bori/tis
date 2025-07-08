
add_library(core_lib STATIC
    src/onnx.pb.cc
    src/onnx_reader.cpp
)

target_include_directories(core_lib PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

target_link_libraries(core_lib PUBLIC protobuf::libprotobuf)
