cmake_minimum_required(VERSION 3.10)

project(til LANGUAGES CXX)

add_library(til SHARED
    src/til.cpp
)

target_include_directories(til PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

target_compile_definitions(til PRIVATE TIL_EXPORTS)

target_link_libraries(til PRIVATE
    core_lib
)

set_target_properties(til PROPERTIES
    OUTPUT_NAME "til"
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
)

# Add test executable
add_executable(til_tests
    tests/test_simple_api.cpp
)

# Set C++ standard for tests
set_target_properties(til_tests PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

# Link libraries for tests
target_link_libraries(til_tests PRIVATE
    til
    gtest_main
)

# Set output directory for tests
set_target_properties(til_tests PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
    OUTPUT_NAME "til_tests"
)

# Add test
add_test(NAME til_tests COMMAND til_tests)