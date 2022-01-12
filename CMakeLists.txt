cmake_minimum_required(VERSION 3.10)
project(SearchServer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic -Werror")

add_executable(1A division_B/1A_interactor.cpp)
add_executable(1B division_B/1B_metro.cc)
add_executable(1C division_B/1C_dates.cc)
add_executable(1D division_B/1D_school.cc)
