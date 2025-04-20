#pragma once
#include "Classes.h"
#include "Cat.h"
#include "Sandwich.h"
#include <vector>
#include <iostream>

class ClassDataBases {
public:
	std::vector<baseClasName*> objects;

	~ClassDataBases();
	void Create(baseClasName::eType type);
	void DisplayAll();
	void Display(const std::string& name);
	void Display(baseClasName::eType type);

};
