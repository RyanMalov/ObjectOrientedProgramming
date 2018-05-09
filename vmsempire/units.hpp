//This file will create and handle the units used in the game

#pragma once

#include <iosfwd>
#include <algorithm>

//Define the types of players in the game
enum Owner
{
	Unknown,
	User,
	Comp
};

//Define the unit pieces in the game
enum UnitType
{
	ARMY,
	FIGHTER,
	PATROL,
	DESTROYER,
	SUBMARINE,
	TRANSPORT,
	CARRIER,
	BATTLESHIP,
	SATELLITE,
	NUMOBJECTS,
	NOPIECE
};

//Defines the types of movement available
enum UnitMovement
{
	NORTH,
	NORTHEAST,
	EAST,
	SOUTHEAST,
	SOUTH,
	SOUTHWEST,
	WEST,
	NORTHWEST
};

//Used for Special Movement
//Original Program uses negative numbers for this,
//might need to change in the future.
enum SpecMovement
{
	NOFUNC,
	RANDOM,
	SENTRY,
	FILL,
	LAND,
	EXPLORE,
	ARMYLOAD,
	ARMYATTACK,
	TTLOAD,
	REPAIR,
	WFTRANSPORT,
	MOVE_N,
	MOVE_NE,
	MOVE_E,
	MOVE_SE,
	MOVE_S,
	MOVE_SW,
	MOVE_W,
	MOVE_NW
};

//Actions a unit can make
enum Action
{
	Attack,
	Sleep,
	Wait,
	Delete,
};

//Create the unit class. This will hold all global functions and variables
class Unit
{
	public:

		//Default constructor		
		Unit(Owner Own,UnitType t, int BTime, int Health, int Str, int Move, int Rang, int Capac)
		: owner(Own), type(t), BuildTime(BTime), HP(Health), Strength(Str), Moves(Move), Range(Rang), Capacity(Capac)
		{}

		virtual bool Action(const SpecMovement Command) = 0;

		//Define Accessors for the units
		Owner getOwner()
		{
			return owner;
		}

		int getBuildTime()
		{
			return BuildTime;
		}

		int getHP()
		{
			return HP;
		}

		int getStrength()
		{
			return Strength;
		}

		int getMoves()
		{
			return Moves;
		}

		int getRange()
		{
			return Range;
		}

		int getCapacity()
		{
			return Capacity;
		}

		//Define the Mutators for the units
		void setOwner(const Owner Own)
		{
			this -> owner = Own;
		}

		void setBuildTime(const int BTime)
		{
			this -> BuildTime = BTime;
		}

		void setHP(const int Health)
		{
			this -> HP = Health;
		}

		void setStrength(const int Str)
		{
			this -> Strength = Str;
		}

		void setMoves(const int Move)
		{
			this -> Moves = Move;
		}

		void setRange(const int Rang)
		{
			this -> Range = Rang;
		}

		void setCapacity(const int Capac)
		{
			this -> Capacity = Capac;
		}

	private:
		
		//Unit Properties
		Owner owner;		//Who owns the unit
		UnitType type;		//What type of unit it is
		int BuildTime;		//How long the build time is
		int Strength;		//How strong a unit is
		int HP;				//How much Health a unit has
		int Moves;			//Amount of moves a unit can take (per turn)
		int Range;			//The range of a given unit
		int Capacity;		//How many other units a given unit can hold (Carrier, Battleship, etc.)

	protected:

		//Commands allowed to be given to units
		bool Random();
		bool Sentry();
		bool Fill();
		bool Land();
		bool Explore();
		bool ArmyLoad();
		bool ArmyAttack();
		bool Repair();
		bool WFTransport();
		bool Move(const UnitMovement Dir);
};

//Subclass for Army
class Army : public Unit
{
	Army(Owner Own, std::pair<int, int> locat)
	: Unit(Own, ARMY, 5, 1, 1, 1, 0, 0), Location(locat)
	{}

	bool Action(const SpecMovement Command) override;
	
	//Used for the coordinates of the unit
	std::pair<int, int> Location;
};

//Subclass for Fighter
class Fighter : public Unit
{
	Fighter(Owner Own, std::pair<int, int> locat)
	: Unit(Own, FIGHTER, 10, 1, 1, 8, 32, 0), Location(locat)
	{}

	bool Action(const SpecMovement Command) override;

	//Used for the coordinates of the unit
	std::pair<int, int> Location;
};

//Subclass for Patrol
class Patrol : public Unit
{
	Patrol(Owner Own, std::pair<int, int> locat)
	: Unit(Own, PATROL, 15, 1, 1, 4, 0, 0), Location(locat)
	{}

	bool Action(const SpecMovement Command) override;

	//Coordinates
	std::pair<int, int> Location;
};

//Subclas for Destroyer
class Destroyer : public Unit
{
	Destroyer(Owner Own, std::pair<int, int> locat)
	: Unit(Own, DESTROYER, 20, 1, 3, 2, 0, 0), Location(locat)
	{}

	bool Action(const SpecMovement Command) override;

	//Coordinates
	std::pair<int, int> Location;
};

//Subclass for Submarine
class Submarine : public Unit
{
	Submarine(Owner Own, std::pair<int, int> locat)
	: Unit(Own, SUBMARINE, 20, 3, 2, 2, 0, 0), Location(locat)
	{}

	bool Action(const SpecMovement Command) override;

	//Coordinates
	std::pair<int, int> Location;
};

//Subclass for Transport
class Transport : public Unit
{
	Transport(Owner Own, std::pair<int, int> locat)
	: Unit(Own, TRANSPORT, 30, 1, 1, 2, 0, 6), Location(locat)
	{}

	bool Action(const SpecMovement Command) override;

	//Coordinates
	std::pair<int, int> Location;
};

//Subclass for Carrier
class Carrier : public Unit
{
	Carrier(Owner Own, std::pair<int, int> locat)
	: Unit(Own, CARRIER, 30, 1, 8, 2, 0, 8), Location(locat)
	{}

	bool Action(const SpecMovement Command) override;

	//Coordinates
	std::pair<int, int> Location;
};

//Subclass for Battleship
class Battleship : public Unit
{
	Battleship(Owner Own, std::pair<int, int> locat)
	: Unit(Own, BATTLESHIP, 40, 2, 10, 2, 0, 0), Location(locat)
	{}

	bool Action(const SpecMovement Command) override;

	//Coordinates
	std::pair<int, int> Location;
};

//Subclass for Satelite
class Satellite : public Unit
{
	Satellite(Owner Own, std::pair<int, int> locat)
	: Unit(Own, SATELLITE, 50, 0, 1, 10, 500, 0), Location(locat)
	{}

	bool Action(const SpecMovement Command) override;

	//Coordinates
	std::pair<int, int> Location;
};








