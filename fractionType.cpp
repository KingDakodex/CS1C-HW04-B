#include "hw04.h"
#include "fractionType.h"

//namespace fractionType;

// arithmatic ops
fractionType fractionType::operator+(const fractionType& fractionTwo)
{
	fractionType fraction;
	
	fraction.numerator = ((this->numerator * fractionTwo.denominator) + (this->denominator * fractionTwo.numerator));
	fraction.denominator = this->denominator * fractionTwo.denominator;
	
	return fraction;
}
fractionType fractionType::operator-(const fractionType& fractionTwo)
{
	fractionType fraction;

	fraction.numerator = ((this->numerator * fractionTwo.denominator) - (this->denominator * fractionTwo.numerator));
	fraction.denominator = this->denominator * fractionTwo.denominator;

	return fraction;
}
fractionType fractionType::operator*(const fractionType& fractionTwo)
{
	fractionType fraction;

	fraction.numerator = this->numerator * fractionTwo.numerator;
	fraction.denominator = this->denominator * fractionTwo.denominator;
	
	return fraction;
}
fractionType fractionType::operator/(const fractionType& fractionTwo)
{
	fractionType fraction;

	fraction.numerator = this->numerator * fractionTwo.denominator;
	fraction.denominator = this->denominator * fractionTwo.numerator;

	return fraction;
}

// relational ops
bool fractionType::operator>(const fractionType& fractionTwo)
{
	double CmpTest;

	// provides a calculation to figure out how the functions compare
	// if CmpTest is > 0 the first fraction is larger
	// if CmpTest is = 0 the fractions are the same
	// if CmpTest is < 0 the second fraction is larger
	CmpTest = (this->numerator * fractionTwo.denominator) - (this->denominator * fractionTwo.numerator);
	
	if (CmpTest > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool fractionType::operator>=(const fractionType& fractionTwo)
{
	double CmpTest;

	// provides a calculation to figure out how the functions compare
	// if CmpTest is > 0 the first fraction is larger
	// if CmpTest is = 0 the fractions are the same
	// if CmpTest is < 0 the second fraction is larger
	CmpTest = (this->numerator * fractionTwo.denominator) - (this->denominator * fractionTwo.numerator);

	if (CmpTest > 0 || CmpTest == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool fractionType::operator<(const fractionType& fractionTwo)
{
	double CmpTest;

	// provides a calculation to figure out how the functions compare
	// if CmpTest is > 0 the first fraction is larger
	// if CmpTest is = 0 the fractions are the same
	// if CmpTest is < 0 the second fraction is larger
	CmpTest = (this->numerator * fractionTwo.denominator) - (this->denominator * fractionTwo.numerator);

	if (CmpTest < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool fractionType::operator<=(const fractionType& fractionTwo)
{
	double CmpTest;

	// provides a calculation to figure out how the functions compare
	// if CmpTest is > 0 the first fraction is larger
	// if CmpTest is = 0 the fractions are the same
	// if CmpTest is < 0 the second fraction is larger
	CmpTest = (this->numerator * fractionTwo.denominator) - (this->denominator * fractionTwo.numerator);

	if (CmpTest < 0 || CmpTest == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool fractionType::operator==(const fractionType& fractionTwo)
{
	double CmpTest;

	// provides a calculation to figure out how the functions compare
	// if CmpTest is > 0 the first fraction is larger
	// if CmpTest is = 0 the fractions are the same
	// if CmpTest is < 0 the second fraction is larger
	CmpTest = (this->numerator * fractionTwo.denominator) - (this->denominator * fractionTwo.numerator);

	if (CmpTest == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//these 2 threw errors i could not identify how to fix, was mad that friend was outside a class
//friend std::istream& operator>>(std::istream& input, fractionType& pull)
//friend std::ostream& operator<<(std::ostream& input, fractionType& push);