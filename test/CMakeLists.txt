cmake_minimum_required(VERSION 3.10)
project(divider_tests)

add_subdirectory(lib/googletest)

include_directories(${HEADERS_DIR})
include_directories(lib/googletest/googletest/include)

set(SOURCE_FILES main.cpp src/divider_tests.cpp)

add_executable(divider_tests ${SOURCE_FILES})
target_link_libraries(utest_divider division gtest)
install(TARGETS utest_divider DESTINATION bin)

