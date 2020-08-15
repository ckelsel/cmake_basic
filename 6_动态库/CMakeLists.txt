# 1. 指定cmake的最小版本
cmake_minimum_required(VERSION 3.5)

# 2. 指定工程名字
project(hello_world)


# 3. 生成可执行文件.exe
add_executable(hello_world helloworld.c)

#  4. 生成动态库
add_library(math math.c)

# 5. 链接动态库
target_link_libraries(hello_world math)
