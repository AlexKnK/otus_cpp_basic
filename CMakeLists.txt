cmake_minimum_required(VERSION 3.12)

project(05.homework)

add_executable(homework 
    "main.cpp"
    "functions.cpp"
    "functions.h"
    "statistics_class.h"
    "min_value_class.cpp"
    "min_value_class.h"
    "max_value_class.cpp"
    "max_value_class.h"
    "mean_value_class.cpp"
    "mean_value_class.h"
    "std_value_class.cpp"
    "std_value_class.h"
)

set_target_properties(homework PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)