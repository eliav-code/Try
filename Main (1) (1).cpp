//Hodaya Ashkenazi 211898754
//C++ - object oriented programming
//Exercise 1 question 1
//The program contains a class called Rational that performs various operations on a rational number such as addition, reduction, etc.

#include"Rational.h"
#include <iostream>
using namespace std;

int main()
{
	int numerator, denominator;
	char tav;
	cout << "enter two rational numbers:" << endl;
	cin >> numerator >> tav >> denominator;
	Rational r1;
	r1.setNumerator(numerator);
	r1.setDenominator(denominator);
	cin >> numerator >> tav >> denominator;
	Rational r2;
	r2.setNumerator(numerator);
	r2.setDenominator(denominator);
	Rational ans = r1.add(r2);
	r1.print();
	cout << "+ ";
	r2.print();
	cout << "= ";
	ans.print();
	cout << endl;
	if (r1.equal(r2))
		cout << "The two numbers are equal" << endl;
	else
	{
		cout << "The two numbers are different" << endl;
		r1.print();
		cout << " ";
		r2.print();
		cout << endl;
	}
	return 0;
}
/*
enter two rational numbers:
1/2
2/6
1/2
+ 2/6
= 5/6

The two numbers are different
1/2
2/6

*/
