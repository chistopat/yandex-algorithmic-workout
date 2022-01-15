cmake_minimum_required(VERSION 3.10)
project(SearchServer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic -Werror")

add_executable(1A divB/1A_interactor.cpp)
add_executable(1B divB/1B_metro.cc)
add_executable(1C divB/1C_dates.cc)
add_executable(1D divB/1D_school.cc)
add_executable(1E divB/1E_triangle.cc)