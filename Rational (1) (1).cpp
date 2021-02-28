//Hodaya Ashkenazi 211898754
//C++ - object oriented programming
//Exercise 1 question 1
//The program contains a class called Rational that performs various operations on a number such as addition, reduction, etc.

#include"Rational.h"
#include <iostream>
#include <cmath>
using namespace std;

void Rational::setNumerator(int num) { //initialize the Numerator
	numerator = num;
}

void Rational::setDenominator(int num) { //initialize the Denumenator
	if (denominator == 0) //change the value if the Denumenator equals to 0
		denominator = 1;
	else
		denominator = num;
}

int Rational::getNumerator()
{
	return numerator;
}

int Rational::getDenumenator()
{
	return denominator;
}

void Rational::print() {
	cout << numerator << '/' << denominator;
}

bool Rational::equal(Rational r2) { //gets a rational number and returns true if it equals to the first number
	double first = (double)numerator / denominator;
	double second = (double)r2.getNumerator() / r2.getDenumenator();
	if (first == second)
		return true;
	return false;
}

Rational Rational::reduction() { //get a rational number and reduce it

	Rational r1;
	if (numerator == denominator) //the number is equal to 1
	{
		r1.setNumerator(1);
		r1.setDenominator(1);
	}
	if (numerator < 0 && denominator < 0)
	{
		numerator = abs(numerator);
		denominator = abs(denominator);
	}

	int min;
	if (numerator > denominator)
		min = denominator;
	else
		min = numerator;

	while (min > 0)// the bigest that can divide the mone and mechane
	{
		if (numerator%min == 0 && denominator%min == 0)// dividing
		{
			r1.setNumerator(numerator / min);
			r1.setDenominator(denominator / min);
			break;
		}
		min--;
	}
	return r1;
	
	//int min;
	//if (numerator > denominator)
	//	min = denominator;
	//else
	//	min = numerator;
	//for (int i = abs(min); i > 1; i--) //checks whether both the Numerator and the Denumenator can be reduced by this number (i)
	//{
	//	if (!(numerator % i) && !(denominator % i))
	//	{
	//		r1.numerator = numerator / i;
	//		r1.denominator = denominator / i;
	//		break;
	//	}
	//}
	//if (r1.numerator < 0 && r1.denominator < 0) //if both the Numerator and the Denumenator are negetive, the number is positive
	//{
	//	r1.numerator *= -1;
	//	r1.denominator *= -1;
	//}

	//return r1;
}

Rational Rational::add(Rational r) //get a rational number and add it to the first one 
{
	Rational r1;
	r1.denominator = r.denominator * denominator;
	r1.numerator = r.numerator * denominator + numerator * r.denominator;
	return (r1.reduction());
}
