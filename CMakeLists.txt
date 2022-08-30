cmake_minimum_required(VERSION 3.16)

project(cpumulator)

add_library(cpumulator 
    src/cpu.hpp
)

target_include_directories(cpumulator PUBLIC src/)
target_link_libraries(cpumulator memmulator)