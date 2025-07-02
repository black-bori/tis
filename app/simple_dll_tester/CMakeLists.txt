cmake_minimum_required(VERSION 3.10)

project(simple_dll_tester LANGUAGES CXX)

add_executable(simple_dll_tester main.cpp)

target_include_directories(simple_dll_tester PRIVATE
    ${CMAKE_SOURCE_DIR}/src/api/include
)

target_link_libraries(simple_dll_tester PRIVATE til)

set_target_properties(simple_dll_tester PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
    OUTPUT_NAME "simple_dll_tester"
) 