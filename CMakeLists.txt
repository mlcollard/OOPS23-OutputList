# @file CMakeLists.txt
# 
# CMake files for OutputList

# Can be run by any version of CMake >= this
cmake_minimum_required(VERSION 3.25)

# project info
project(OutputList)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Source files for the main program output
set(SOURCE OutputList.cpp Leaf.cpp List.cpp OutputVisitor.cpp)

# convert application
add_executable(output ${SOURCE})

# Turn on warnings
if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # standard warnings
    add_compile_options(-Wall)
endif()
