# CMakeList.txt : CMake project for SimpleProject, links a static library built as a subdirectory.
cmake_minimum_required (VERSION 3.21)

# Write a .gitignore file so that git will ignore CMake-generated files.
file( WRITE ${CMAKE_CURRENT_BINARY_DIR}/.gitignore "# Ignore all files in this directory\n*\n" )

project(SimpleProject)
#set(VS_STARTUP_PROJECT SimpleProject)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT SimpleProject)
add_subdirectory( StaticLib )
add_executable(SimpleProject HelloWorld.cpp)

target_link_libraries( SimpleProject PUBLIC StaticLib)
target_include_directories( SimpleProject PUBLIC "${PROJECT_BINARY_DIR}" "{PROJECT_SOURCE_DIR}/StaticLib")

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT SimpleProject)
set_property(TARGET SimpleProject PROPERTY CXX_STANDARD 20)
set_property(TARGET SimpleProject PROPERTY CXX_STANDARD_REQUIRED True)


