project(unit_test)
add_executable(unit_test a.cpp)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_FLAGS  "-std=c++17")
target_link_libraries(unit_test gtest pthread gtest_main)
