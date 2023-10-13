#pragma once

#include "hw04.h"

class fractionType
{
public:
	//constructor
	fractionType()
	{
		numerator = 0;
		denominator = 0;
	}

	//alternate constructor
	fractionType(int argNumerator, int argDenominator)
	{
		numerator = argNumerator;
		denominator = argDenominator;
	}

	//copy constructor
	fractionType(fractionType& Original)
	{
		numerator = Original.numerator;
		denominator = Original.denominator;
	}

	//destructor
	~fractionType()
	{
		//std::cout << "Removed a Fraction Object\n";
	}

private:
	//variables
	double numerator;
	double denominator;

public:
	//functions
	fractionType operator+(const fractionType& fractionTwo);
	fractionType operator-(const fractionType& fractionTwo);
	fractionType operator*(const fractionType& fractionTwo);
	fractionType operator/(const fractionType& fractionTwo);
	//don't need?
	//fractionType operator=(const fractionType& fractionTwo);
	bool operator>(const fractionType& fractionTwo);
	bool operator>=(const fractionType& fractionTwo);
	bool operator<(const fractionType& fractionTwo);
	bool operator<=(const fractionType& fractionTwo);
	bool operator==(const fractionType& fractionTwo);


	friend std::istream& operator>>(std::istream& input, fractionType& pull)
	{
		std::cout << "input numerator: ";
		input >> pull.numerator;
		std::cout << "input denominator: ";
		input >> pull.denominator;
		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, fractionType& push)
	{
		output << push.numerator << "/" << push.denominator;
		return output;
	}
};