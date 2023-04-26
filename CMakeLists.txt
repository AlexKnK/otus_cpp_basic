cmake_minimum_required(VERSION 3.5)

project(05.homework)

add_executable(homework
	main.cpp
	functions.cpp
	functions.h
)
set_target_properties(homework PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)