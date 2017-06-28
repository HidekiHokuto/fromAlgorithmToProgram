cmake_minimum_required(VERSION 3.7)
project(fromAlgprithmsToProgram)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.cpp chapter1/utility/compare.cpp chapter1/utility/compare.hpp chapter1/utility/search.hpp chapter1/utility/search.cpp)
add_executable(fromAlgprithmsToProgram ${SOURCE_FILES})