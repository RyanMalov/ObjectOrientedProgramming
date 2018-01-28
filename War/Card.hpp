//Ryan Malov
//Object Oriented Programming
//Spring 2018
//Card.hpp file

#pragma once



//Defining one of the characteristics of a card
//in this case, the rank of the card
enum Rank
{
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King,
	Ace
};

//Defining another characteristic of a card
//in this case, the suit of the card
enum Suit
{
	Hearts,
	Diamonds,
	Clubs,
	Spades
};

class Card
{
	Card(Rank r, Suit s)
	: rank(r), suit(s)
	{}
	private:
	Rank rank;
	Suit suit;
};
