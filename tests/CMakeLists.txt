add_executable(test_bubble_sort test_bubble_sort.cpp)

target_link_libraries(test_bubble_sort gtest gtest_main dsa)

target_include_directories(test_bubble_sort PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_test(NAME BubbleSortTests COMMAND test_bubble_sort)
