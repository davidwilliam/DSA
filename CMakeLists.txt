cmake_minimum_required(VERSION 3.10)
project(DSA VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(dsa src/main.cpp)

target_include_directories(dsa PUBLIC "${PROJECT_SOURCE_DIR}/include")

enable_testing()
add_subdirectory(tests)
