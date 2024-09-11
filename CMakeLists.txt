cmake_minimum_required(VERSION 3.10)
project(DSA VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "src/*.cpp")

add_library(dsa ${SOURCES})
target_include_directories(dsa PUBLIC ${PROJECT_SOURCE_DIR}/include)

file(GLOB DEMO_SOURCES "demos/*.cpp")

foreach(demo_source ${DEMO_SOURCES})
    get_filename_component(demo_name ${demo_source} NAME_WE)
    add_executable(${demo_name} ${demo_source})
    target_link_libraries(${demo_name} dsa)
endforeach()

enable_testing()

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.15.2
)
FetchContent_MakeAvailable(googletest)

file(GLOB TEST_SOURCES "tests/*.cpp")

foreach(test_source ${TEST_SOURCES})
    get_filename_component(test_name ${test_source} NAME_WE)
    add_executable(${test_name} ${test_source})
    target_link_libraries(${test_name} gtest_main dsa)
    add_test(NAME ${test_name}Tests COMMAND ${test_name})
endforeach()
