cmake_minimum_required(VERSION 3.9)
project(3D_Library)

set(CMAKE_CXX_STANDARD 11)

add_executable(3D_Library main.cpp point.h plane.h line.h functions.cpp)