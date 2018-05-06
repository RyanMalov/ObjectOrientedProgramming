//This file will create and handle the units used in the game

#pragma once

#include <iosfwd>


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
	Army,
	Fighter,
	Patrol,
	Destroyer,
	Submarine,
	Transport,
	Carrier,
	Battleship,
	Satellite,
	NumObjects,
	NoPiece
};

//Defines the types of movement available
enum UnitMovement
{
	North,
	NorthEast,
	East,
	SouthEast,
	South,
	SouthWest,
	West,
	NorthWest
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
	Move_E,
	Move_SE,
	Move_S,
	Move_SW,
	Move_W,
	Move_NW
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
	Unit(Owner Own, Type t, int BTime, int Health, int Str, int Move, int Rang, int Capac)
	: owner(Own), type(t), BuiltTime(BTime), HP(Health), Strength(Str), Moves(Move), Range(Rang), Capacity(Capac)
	{}

	private:
		
		//Unit Properties
		Owner owner;		//Who owns the unit
		Type type;			//What type of unit it is
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
		bool land();
		bool Explore();
		bool ArmyLoad();
		bool ArmyAttack();
		bool Repair();
		bool WFTransport();
		bool Move(const Direction Dir);
};














