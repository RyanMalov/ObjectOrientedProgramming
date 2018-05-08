project(vmsempire CXX)

set(CMAKE_CXX_FLAGS "-std=c++1z")

add_executable(empire
		units.hpp
		units.cpp
		main.cpp)
