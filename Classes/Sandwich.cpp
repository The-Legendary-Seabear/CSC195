#include "Sandwich.h"
#include <iostream>

void Sandwich::Read(std::ostream& ostream, std::istream& istream) {
	baseClasName::Read(ostream, istream);
	ostream << "Enter num of chicken slices ";
	istream >> numOfChickenSlices;
}

void Sandwich::Write(std::ostream& ostream) {
	baseClasName::Write(ostream);
	ostream << "Number of chicken slices: " << numOfChickenSlices << std::endl;
}