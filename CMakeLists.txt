cmake_minimum_required(VERSION 3.10)
project(DSA VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_library(dsa src/bubble_sort.cpp)

target_include_directories(dsa PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(main_exec src/main.cpp)

target_link_libraries(main_exec dsa)

enable_testing()

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.15.2
)
FetchContent_MakeAvailable(googletest)

add_executable(test_exec tests/test_bubble_sort.cpp)

target_link_libraries(test_exec gtest gtest_main dsa)

target_include_directories(test_exec PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_test(NAME BubbleSortTests COMMAND test_exec)
