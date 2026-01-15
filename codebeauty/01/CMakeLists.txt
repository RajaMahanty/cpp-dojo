cmake_minimum_required(VERSION 3.16)
project(DataTypes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(DataTypes DataTypes.cpp)
target_link_libraries(DataTypes Qt5::Widgets)
