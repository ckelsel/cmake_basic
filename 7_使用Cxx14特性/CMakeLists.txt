cmake_minimum_required(VERSION 3.5)

project(cxx14 LANGUAGES CXX)

# 指定CXX标准14
set(CMAKE_CXX_STANDARD 14)
# 不使用编译器扩展
set(CMAKE_CXX_EXTENSIONS OFF)
# 必须支持CXX14
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(testcxx14 test.cpp)

set(CMAKE_VERBOSE_MAKEFILE ON)
