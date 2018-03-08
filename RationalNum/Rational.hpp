//Rational Number Class practice

#include <iostream>

class Rational
{
private:
	int num;
	int den;

public:	
	//GCD test
	int gcd(int a, int b)
	{
		if(b == 0)
		{
			return a;
		}
		else gcd(b, a%b);
	}

	//Constructor
	Rational(int n, int d)
	: num(n/gcd(n,d)), den(d/gcd(n,d))
	{
		if(d == 0)
		{
			throw std::logic_error("Denominator Cannot Be Zero!");
		}
	}

	//Check for Equality
	friend bool operator==(const Rational& lhs, const Rational& rhs);
	friend bool operator!=(const Rational& lhs, const Rational& rhs);

	//Mathmatical Operations
	friend Rational& operator+(const Rational& lhs, const Rational& rhs);
	friend Rational& operator-(const Rational& lhs, const Rational& rhs);
	friend Rational& operator*(const Rational& lhs, const Rational& rhs);
	friend Rational& operator/(const Rational& lhs, const Rational& rhs);

	//Comparing Values
	friend bool operator<(const Rational& lhs, const Rational& rhs);
	friend bool operator>(const Rational& lhs, const Rational& rhs);
	friend bool operator<=(const Rational& lhs, const Rational& rhs);
	friend bool operator>=(const Rational& lhs, const Rational& rhs);
};

//Equality
inline bool operator==(const Rational& lhs, const Rational& rhs)
{
	if((lhs.num * rhs.den) == (rhs.num * lhs.den))
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline bool operator!=(const Rational& lhs, const Rational& rhs)
{
	return !(lhs == rhs);
}

//Mathmatical Operations
inline Rational operator+(const Rational& lhs, const Rational& rhs)
{
	Rational rat;

	if(lhs.den == rhs.den)
	{
		rat.num = lhs.num + rhs.num;
		rat.den = lhs.den;
	}
	else
	{
		rat.num = (lhs.num * rhs.den) + (rhs.num * lhs.den);
		rat.den = lhs.den * rhs.den;
	}
	return rat;
}

inline Rational operator-(const Rational& lhs, const Rational& rhs)
{
	Rational rat;
	if(lhs.den == rhs.den)
	{
		rat.num = lhs.num - rhs.num;
		rat.den = lhs.den;
	}
	else
	{
		rat.num = (lhs.num * rhs.den) - (rhs.num * lhs.den);
		rat.den = lhs.den * rhs.den;
	}
	return rat;
}

inline Rational operator*(const Rational& lhs, const Rational& rhs)
{
	Rational rat;

	rat.num = lhs.num * rhs.num;
	rat.den = lhs.den * rhs.den;
	return rat;
}

//Comparisons
inline bool operator<(const Rational& lhs, const Rational rhs)
{
	if((lhs.num * rhs.den) < (lhs.den * rhs.num))
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline bool operator>(const Rational& lhs, const Rational& rhs)
{
	return (rhs < lhs);
}

inline bool operator<=(const Rational& lhs, const Rational& rhs)
{
	return !(lhs > rhs);
}

inline bool operator>=(const Rational& lhs, const Rational& rhs)
{
	return !(lhs < rhs);
}

//Inputs and Outputs
inline std::istream& operator>>(std::istream &stream, const Rational &in)
{
	return stream >> in.num >> '/' >> in.den;
}

inline std::ostream& operator<<(std::ostream &stream, const Rational &out)
{
	return stream << out.num << '/' >> out.den;
}






















