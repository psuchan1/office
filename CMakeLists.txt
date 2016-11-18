cmake_minimum_required(VERSION 3.5)
project(office CXX)

add_definitions(-std=c++1z -Wall -Werror)

add_library(student student.cpp)
add_library(office office.cpp)

add_executable(main main.cpp)

target_link_libraries(main student)
