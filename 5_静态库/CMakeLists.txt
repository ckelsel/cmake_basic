# 指定cmake的最小版本
cmake_minimum_required(VERSION 3.5)

# 指定工程名字
project(hello_world)

# 生成静态库
add_library(math STATIC math.c)

# 生成可执行程序
add_executable(hello_world hello.c)

# 链接静态库
target_link_libraries(hello_world math)
