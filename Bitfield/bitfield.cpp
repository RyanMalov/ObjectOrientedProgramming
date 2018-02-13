#include <iostream>
#include "bitfield.hpp"

enum Rank {
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
		King
};
enum Suit {
		Hearts,
		Diamonds,
		Clubs,
		Spades
};

class Card {
	
	public:
		//Constructor	
		Card() = default;

		//Construct and initialize
		Card(Rank r, Suit s)
		 : bits((unsigned)s << 4 | (unsigned)r)
		{}

		//Copy Constructor
		Card(const Card& c)
		{
		bits = c.bits;
		}

		//Destructor
		~Card();
		
		Rank get_rank() const {
				return (Rank)(0b001111 & bits);
		}

		Suit get_suit() const {
				return (Suit)((0b110000 & bits) >> 4);
		}
	private:
		unsigned char bits;



	bool operator==(Card c) const {
		return bits == c.bits;
	}

	bool operator!=(Card c) const {
		return bits != c.bits;
	}

	//Greater Than
	friend bool operator>(const Card& a, const Card& b)
	{
			return a.get_rank() > b.get_rank();
	}


	//Less Than
	friend bool operator < (const Card& a, const Card& b)
	{
			return a.get_rank() < b.get_rank();
	}



};

int main()
{
	std::cout << "test\n";
	return 0;
};
