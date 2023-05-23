cmake_minimum_required(VERSION 3.12)

project(05.homework)

add_executable(homework 
    "main.cpp"
    "statistics_class.h"
    "min_class.cpp"
    "min_class.h"
    "max_class.cpp"
    "max_class.h"
    "mean_class.cpp"
    "mean_class.h"
    "std_class.cpp"
    "std_class.h"
)

set_target_properties(homework PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)