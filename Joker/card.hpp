//Ryan Malov Joker Card class practice

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
	Hearts,
	Diamonds,
};

enum Color
{
	Red,
	Black,
};

class StandardCard
{
	public:
		
		StandardCard() = default;
		StandardCard(Rank r, Suit s)
		: rank(r), suit(s)
		{}

		Rank getRank() const
		{
			return rank;
		}

		Suit getSuit() const
		{
			return suit;
		}

	private:

		Rank rank;
		Suit suit;
};

class JokerCard
{
	public:

		JokerCard(Color c)
		: color(c)
		{}

		Color getColor() const
		{
				return color;
		}

	private:

		Color color;
};

class Card
{
	public:

		enum Kind
		{
			Standard,
			Joker,
		};

	private:

		union Value
		{
			Value(StandardCard c) : sc(c) { }
			Value(JokerCard c) : jc(c)  { }

			StandardCard sc;
			JokerCard jc;
		};

		Kind kind;
		Value value;

	public:
		
		//Make the constructors
		Card(Rank r, Suit s)
		: kind(Standard), value(StandardCard(r, s))
		{}

		Card(Color c)
		: kind(Joker), value(JokerCard(c)
		{}

		Card(StandardCard c)
		: kind(Standard), value(c)
		{}

		Card(JokerCard c)
		: kind(Joker), value(c)
		{}

		//Make the accessor functions
		Kind getKind() const
		{
			return kind;
		}

		bool isStandard() const
		{
			return kind == Standard;
		}

		bool isJoker() const
		{
			return kind == Joker;
		}

		StandardCard getStandardCard() const
		{
			assert(isStandard());
			return value.sc;
		}

		JokerCard getJokerCard() const
		{
			assert(isJoker());
			return value.jc;
		}

		Rank getRank() const
		{
			return getStandardCard().getRank();
		}

		Suit getSuit() const
		{
				return getStandardCard().getSuit;
		}

		Color getColor const
		{
				return getStandardCard().getColor;
		};

		//Overloaded function
		friend std::ostream& operator<<(std::ostream& s, const std::vecotr<Card>& d)
		{
			for(int i = 0; i < d.size(); i++)
			{
				if(d[i].isStandard())
				{
					s << "Rank: " << d[i].getRank() << ", Suit: " << d[i].getSuit() << '\n';
				}
				else
				{
					s << "Color: " << d[i].getColor() << '\n';
				}
			}

			return s;
		}
};












