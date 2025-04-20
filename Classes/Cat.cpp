#include "Cat.h"
#include <iostream>

void Cat::Read(std::ostream& ostream, std::istream& istream)
{
	baseClasName::Read(ostream, istream);
	ostream << "Enter Number of tails: ";
	istream >> numOfTails;
}

void Cat::Write(std::ostream& ostream) {
	baseClasName::Write(ostream);
	ostream << "Number of tails: " << numOfTails << std::endl;
}