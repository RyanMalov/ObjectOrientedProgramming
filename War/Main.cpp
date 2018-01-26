//Ryan Malov
//War practice
//Oop Spring 2018
//Main.cpp


#include "Card.hpp"
#include <iostream>

int main()
{
	std::cout << "Hello World\n";
	
	Rank r1 = King;
	Rank r2 = Three;
	std::cout << (r1 == r2) << std::endl;
	std::cout << (r1 < r2) << std::endl;
	
	int n0;
	Rank r5 = static_cast<Rank>(n0);
	
	int n = King;
}

