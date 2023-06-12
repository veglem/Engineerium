cmake_minimum_required(VERSION 3.24)
project(L55_stack_set_map)

set(CMAKE_CXX_STANDARD 11)

add_executable(L55_stack_set_map main.cpp header.h Stack/Stack.cpp Unordered_map/Unordered_map.cpp Unordered_set/Unordered_set.cpp Unordered_map/Unordered_multimap.cpp Unordered_set/Unordered_multiset.cpp)
