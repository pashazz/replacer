cmake_minimum_required(VERSION 2.8.4)
project(Replacer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES func.cpp)
set(HEADER_FILES func.h)
add_executable(Replacer ${SOURCE_FILES} ${HEADER_FILES} main.cpp)


add_subdirectory(gtest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(runUnitTests ${SOURCE_FILES} ${HEADER_FILES} test_func.cpp)
# Standard linking to gtest stuff.
target_link_libraries(runUnitTests gtest gtest_main)

add_test(TestNumbersToBinaryNumberAtEnd, runUnitTests)