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

set_target_properties(til PROPERTIES
    OUTPUT_NAME "til"
    WINDOWS_EXPORT_ALL_SYMBOLS ON
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>"
) 