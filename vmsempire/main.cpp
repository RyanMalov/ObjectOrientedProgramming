//Main file for VMS Empire rework
//Ryan Malov

#include <iostream>
#include "units.hpp"


int main(int argv, char** argc)
{
		Army army1(Owner);

		std::cout << "Army was created!" << std::endl;
		std::cout << "The owner is: " << army1.getOwner() << std::endl;
		std::cout << "The Build Time is: " << army1.getBuildTime() << std::endl;
		std::cout << "The Strength is: " << army1.getStrength() << std::endl;
		std::cout << "The Health is: " << army1.getHP() << std::endl;
		std::cout << "The Moves are: " << army1.getMoves() << std::endl;
		std::cout << "The Range is: " << army1.getRange() << std::endl;
		std::cout << "The Capaity is: " << army1.getCapacity() << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		army1.Action(SENTRY);
		army1.Action(MOVE_S);

		return 0;

}
