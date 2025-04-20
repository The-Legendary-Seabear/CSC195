#pragma once
#include <iostream>
#include "Classes.h"

class Sandwich : public baseClasName {
private:
	int numOfChickenSlices;

public:
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	eType GetType() override { return eType::SANDWICH; }

};
