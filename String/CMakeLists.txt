project(string CXX)

set(CMAKE_CXX_FLAGS "-std=c++1z")

add_executable(string
		Main.cpp
		String.hpp
		string.cpp)
