cmake_minimum_required (VERSION 3.12)

add_library(StaticLib STATIC StaticLib.cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

target_include_directories(StaticLib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
set_property(TARGET StaticLib PROPERTY CXX_STANDARD 20)
set_property(TARGET StaticLib PROPERTY CXX_STANDARD_REQUIRED True)