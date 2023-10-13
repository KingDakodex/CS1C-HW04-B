#include "hw04.h"
#include "fractionType.h"

/*
Author: Dakota Gall
Class CS1C TTh 4:30
Assignment: hw04
*/

int main()
{
	fractionType fractionOne;
	fractionType fractionTwo;
	fractionType fractionThree;

	std::cout << "Please input a fraction:\n";
	std::cin >> fractionOne;

	std::cout << "Please input a second fraction:\n";
	std::cin >> fractionTwo;

	//arithmatic
	fractionThree = (fractionOne + fractionTwo);
	std::cout << fractionOne << " + " << fractionTwo << " = " << fractionThree << "\n";

	fractionThree = (fractionOne - fractionTwo);
	std::cout << fractionOne << " - " << fractionTwo << " = " << fractionThree << "\n";

	fractionThree = (fractionOne * fractionTwo);
	std::cout << fractionOne << " * " << fractionTwo << " = " << fractionThree << "\n";

	fractionThree = (fractionOne / fractionTwo);
	std::cout << fractionOne << " / " << fractionTwo << " = " << fractionThree << "\n";

	//bools
	std::cout << "is fraction one larger than fraction two?\n";
	if (fractionOne > fractionTwo)
	{
		std::cout << "yes\n";
	}
	else
	{
		std::cout << "no\n";
	}

	std::cout << "is fraction one larger than or equel too fraction two?\n";
	if (fractionOne >= fractionTwo)
	{
		std::cout << "yes\n";
	}
	else
	{
		std::cout << "no\n";
	}

	std::cout << "is fraction one equel too fraction two?\n";
	if (fractionOne == fractionTwo)
	{
		std::cout << "yes\n";
	}
	else
	{
		std::cout << "no\n";
	}

	std::cout << "is fraction one smaller than fraction two?\n";
	if (fractionOne < fractionTwo)
	{
		std::cout << "yes\n";
	}
	else
	{
		std::cout << "no\n";
	}

	std::cout << "is fraction one smaller than or equel fraction two?\n";
	if (fractionOne <= fractionTwo)
	{
		std::cout << "yes\n";
	}
	else
	{
		std::cout << "no\n";
	}

	std::cout << "Program complete :) have a nice day";

	return 0;
}