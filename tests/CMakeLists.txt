include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)

add_executable(test_dsa test_dsa.cpp)
target_link_libraries(test_dsa gtest gtest_main)
target_include_directories(test_dsa PRIVATE ${PROJECT_SOURCE_DIR}/include)
add_test(NAME DsaTest COMMAND test_dsa)
