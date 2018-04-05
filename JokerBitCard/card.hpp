//This is the bitcard file for the JokerCard Practice

#pragma once

#include <cassert>
#include <iosfwd>

enum Rank
{
	Ace,
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
};

enum Suit
{
	Spades,
	Clubs,
	Diamonds,
	Hearts,
};

enum Type
{
	Standard,
	Joker,
};

enum Color
{
	Red,
	Black,
};

class Card
{
	private:

		unsigned char bits;

	public:
		
		//Default Constructor
		Card() = default;

		Card(Type t = 0, Color c = 0, Rank r, Suit s)
		: bits((unsigned)t << 7 |
						(unsigned)c << 6 |
						(unsigned)s << 4 |
						(unsigned)r);
		{}

		Card(const Card& c)
		{
			this -> bits = c.bits;
		}
		
		//Assignement Overload
		operator = (const Card& c)
		{
			this -> bits = c.bits;
		}

		//Accessors
		Type getType() const {
				return (Type)((0b10000000 & bits) >> 7);
		}

		Color getColor() const {
				return (Color)((0b01000000 & bits) >> 6);
		}

		Suit getSuit() const {
				return (Suit)((0b110000 & bits) >> 4);
		}

		Rank getRank() const {
				return (Rank)(0b001111 & bits);
		}

		friend std::ostream& operator<<(std::ostream& s, Card& c)
		{
			if(getType())
			{
				s << "Standard Card: Rank = " <<getRank() << " and Suit = " << getSuit() << '\n';
			}
			else
			{
				s << "Joker Card: Color = " << getColor() << '\n';
			}

			return s;
		}
}

