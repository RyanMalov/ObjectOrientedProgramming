//Deck for the Inheritance part of the practice

#include <iostream>
#include "card.hpp"

int main()
{
	//Create an initial card
	Card SimpleCard(0);

	//Create a Standard Card and a Joker Card
	StandardCard ClubsTwo (0, Two, Clubs);
	JokerCard RedJoker(51, Red);

	//Create the standard deck of cards
	std::vector<StandardCard*> list;

	for(int n = 0; n < 52; n++)
	{
		for(int r = Ace; r < King; r++)
		{
			for(int s = Spades; s < Hearts; s++)
			{
				list.push_back({static_cast<int>(n>, static_cast<Rank>(r), static_cast<Suit>(s)});
			}
		}
	}
	Deck deck(list);
}
