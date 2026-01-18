cmake_minimum_required(VERSION 3.16)
project(my_http_server)

set(CMAKE_CXX_STANDARD 17)

add_executable(server src/main.cpp)
target_include_directories(server PRIVATE include)