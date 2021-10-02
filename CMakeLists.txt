cmake_minimum_required(VERSION 3.20)
project(cppproject)

set(CMAKE_CXX_STANDARD 14)

add_executable(cppproject cmake-build-debug/CMyString.cpp cmake-build-debug/StringSample1234.cpp cmake-build-debug/CMyString.h)
