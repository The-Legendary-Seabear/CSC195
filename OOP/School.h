#pragma once
#include "Human.h"
#include <vector>

using namespace std;

class School {
	public:
		~School();

		void add(Human::Type type);
		
		void displayAll();

		void displayByType(Human::Type type);
		void displayByName(string name);



private:
		vector<Human*> m_humans;

};
