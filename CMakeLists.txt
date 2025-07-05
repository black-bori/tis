cmake_minimum_required(VERSION 3.10)

project(tis LANGUAGES CXX)

# Force GoogleTest to use shared runtime library
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(src)
add_subdirectory(app)

# Add GoogleTest
add_subdirectory(third_party/googletest)

# Enable testing
enable_testing()

include(GoogleTest)