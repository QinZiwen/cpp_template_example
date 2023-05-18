cmake_minimum_required(VERSION 3.21)
project (CPP_TEMPLATE_EXAMPLE)

set(CMAKE_CXX_STANDARD 20 CACHE STRING "The C++ standard to use")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory (src)
