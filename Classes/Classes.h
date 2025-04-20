#pragma once

#include <string>

class baseClasName {
public:
	enum class eType {
		CAT,
		SANDWICH,
		SOCK
	};

	std::string name;
	std::string price;

	virtual void Read(std::ostream& ostream, std::istream& istream) = 0;
	virtual void Write(std::ostream& ostream) = 0;
	std::string getName() {
		return name;
	}
	virtual eType GetType() = 0;




};