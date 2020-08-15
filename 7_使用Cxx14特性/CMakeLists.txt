cmake_minimum_required(VERSION 3.5)

project(testcxx14 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_VERBOSE_MAKEFILE ON)

add_executable(testcxx14 testcxx14.cpp)
