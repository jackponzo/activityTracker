cmake_minimum_required(VERSION 3.17)
project(test)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include
        ${gtest_SOURCE_DIR})

set(SOURCE_FILES runAllTests.cpp)
add_executable(runAllTests ${SOURCE_FILES})