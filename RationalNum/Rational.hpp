//Rational Number Class practice

#include <iostream>

class Rational
{
	int num;
	int den;
	
	int gcd(int a, int b)
	{
		if(b == 0)
		{
			return a;
		}
		else gcd(b, a%b)
	}

	Rational(int n, int d)
	: num(n/gcd(n,d)), den(d/gcd(n,d));
