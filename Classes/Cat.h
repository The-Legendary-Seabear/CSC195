#pragma once
#include <iostream>
#include "Classes.h"

class Cat : public baseClasName {
private:
	int numOfTails;

public:
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	eType GetType() override { return eType::CAT; }

};
