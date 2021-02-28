
//Hodaya Ashkenazi 211898754
//C++ - object oriented programming
//Exercise 1 question 1
//The program contains a class called Rational that performs various operations on a number such as addition, reduction, etc.
#pragma once
class  Rational
{
	//the data members of the class
	int numerator;
	int denominator;
	Rational reduction();
public:
	//the methods of the class
	void setNumerator(int num);
	void setDenominator(int num);
	int getNumerator();
	int getDenumenator();
	void print();
	bool equal(Rational r);
	Rational add(Rational r);
};
