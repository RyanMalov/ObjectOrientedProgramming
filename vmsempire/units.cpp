//Ryan Malov
//The cpp file for the units file

#include "units.hpp"
#include <cassert>
#include <iostream>

//Class implementations for the various types of units
bool Unit::ArmyLoad()
{
	assert(this -> type == ARMY);
}

bool Unit::ArmyAttack()
{
	assert(this -> type == ARMY);
}

bool Unit::Random()
{

}

bool Unit::Sentry()
{

}

bool Unit::Land()
{

}

bool Unit::Explore()
{

}

bool Unit::Repair()
{

}

bool Unit::WFTransport()
{

}

bool Unit::Move(const UnitMovement Dir)
{

}

//Subclass functions (things they can do)
bool Army::Action(const SpecMovement Command)
{
	//use a switch statement for deciding what to do based on the user's selection
	switch(Command)
	{
		case NOFUNC:
			break;
		case RANDOM:
			std::cout << "Random" << std::endl;
			break;
		case SENTRY:
			  std::cout << "Sentry" << std::endl;
			  break;
		case FILL:
			  std::cout << "Invalid, please select another command" << std::endl;
			  break;
		case LAND:
			  std::cout << "Invalid, please select another command" << std::endl;
			  break;
		case EXPLORE:
			  std::cout << "Explore" << std::endl;
			  break;
		case ARMYLOAD:
			  std::cout << "Army Load" << std::endl;
			  break;
		case ARMYATTACK:
			  std::cout << "Army Attack" << std::endl;
			  break;
		case REPAIR:
			  std::cout << "Repair" << std::endl;
			  break;
		case WFTRANSPORT:
			  std::cout << "WF Transport" << std::endl;
			  break;
		case MOVE_N:
			  std::cout << "Move North" << std::endl;
			  break;
		case MOVE_NE:
			  std::cout << "Move Northeast" << std::endl;
			  break;
		case MOVE_E:
			  std::cout << "Move East" << std::endl;
			  break;
		case MOVE_SE:
			  std::cout << "Move Southeast" << std::endl;
			  break;
		case MOVE_S:
			  std::cout << "Move South" << std::endl;
			  break;
		case MOVE_SW:
			  std::cout << "Move Southwest" << std::endl;
			  break;
		case MOVE_W:
			  std::cout << "Move West" << std::endl;
			  break;
		case MOVE_NW:
			  std::cout << "Move Northwest" << std::endl;
			  break;
		default:
			  std::cout << "Unknown command, please try again" << std::endl;
			  break;
	};
}

//Do the exact same things for the remaining types of units
bool Fighter::Action(const SpecMovement Command)
{
	//Same as Army
}

bool Patrol::Action(const SpecMovement Command)
{
	//Same as above
}

bool Destroyer::Action(const SpecMovement Command)
{

}

bool Submarine::Action(const SpecMovement Command)
{

}
bool Transport::Action(const SpecMovement Command)
{

}
bool Carrier::Action(const SpecMovement Command)
{

}
bool Battleship::Action(const SpecMovement Command)
{

}
bool Satellite::Action(const SpecMovement Command)
{

}
