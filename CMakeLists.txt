cmake_minimum_required(VERSION 3.10)

project(tis LANGUAGES CXX)

# Force GoogleTest to use shared runtime library
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(src)
add_subdirectory(app)

# Add GoogleTest
add_subdirectory(third_party/googletest)

# Add Protobuf and configure its build options
set(protobuf_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(protobuf_BUILD_LIBUPB OFF CACHE BOOL "" FORCE)
set(protobuf_BUILD_PROTOC_BINARIES OFF CACHE BOOL "" FORCE)
set(protobuf_MSVC_STATIC_RUNTIME OFF CACHE BOOL "" FORCE)
add_subdirectory(third_party/protobuf)

# Enable testing
enable_testing()

include(GoogleTest)