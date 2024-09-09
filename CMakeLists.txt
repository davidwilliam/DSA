cmake_minimum_required(VERSION 3.10)
project(DSA VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(dsa src/bubble_sort.cpp src/selection_sort.cpp src/insertion_sort.cpp src/quick_sort.cpp src/merge_sort.cpp src/shell_sort.cpp)
target_include_directories(dsa PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(main src/main.cpp)
target_link_libraries(main dsa)

enable_testing()

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.15.2
)
FetchContent_MakeAvailable(googletest)

add_executable(test_bubble_sort tests/test_bubble_sort.cpp)
target_link_libraries(test_bubble_sort gtest_main dsa) 

add_executable(test_selection_sort tests/test_selection_sort.cpp)
target_link_libraries(test_selection_sort gtest_main dsa) 

add_test(NAME BubbleSortTests COMMAND test_bubble_sort)
add_test(NAME SelectionSortTests COMMAND test_selection_sort)

add_executable(test_insertion_sort tests/test_insertion_sort.cpp)
target_link_libraries(test_insertion_sort gtest_main dsa)
add_test(NAME InsertionSortTests COMMAND test_insertion_sort)

add_executable(test_quick_sort tests/test_quick_sort.cpp)
target_link_libraries(test_quick_sort gtest_main dsa)
add_test(NAME QuickSortTests COMMAND test_quick_sort)

add_executable(test_merge_sort tests/test_merge_sort.cpp)
target_link_libraries(test_merge_sort gtest_main dsa)
add_test(NAME MergeSortTests COMMAND test_merge_sort)

add_executable(test_shell_sort tests/test_shell_sort.cpp)
target_link_libraries(test_shell_sort gtest_main dsa)
add_test(NAME ShellSortTests COMMAND test_shell_sort)
