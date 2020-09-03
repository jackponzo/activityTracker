cmake_minimum_required(VERSION 3.12)
project(test)

set(CMAKE_CXX_STANDARD 11)

#Qt5 Widgets
set(CMAKE_PREFIX_PATH "C:\\Qt\\5.9.9\\mingw53_32\\lib\\cmake")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets)


#GoogleTest
add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


set(TEST_SOURCE_FILES runAllTests.cpp TestActivity.cpp TestRegister.cpp)

add_executable(runAllTests ${TEST_SOURCE_FILES})
target_link_libraries(runAllTests Qt5::Widgets)
target_link_libraries(runAllTests gtest gtest_main core)
