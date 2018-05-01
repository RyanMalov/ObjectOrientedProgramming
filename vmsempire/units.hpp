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
enum Units
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
	NoFunc,
	Random,
	Sentry,
	Fill,
	Land,
	Explore,
	ArmyLoad,
	ArmyAttack,
	TTload,
	Repair,
	WFtransport,
	Move_N,
	Move_NE,
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















