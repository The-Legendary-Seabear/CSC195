

#include <iostream>
#include "ClassDataBases.h"
#include "Cat.h"
#include "Sandwich.h"
#include "Classes.h"

int main()
{
    ClassDataBases database;
    std::string name;
    bool quit = false;
    while (!quit) {
        std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        std::cin >> choice;
        switch (choice) {
        case 1:
            std::cout << "Enter type (0 for CAT, 1 for SANDWICH): ";
            int t;
            std::cin >> t;
            database.Create(static_cast<baseClasName::eType>(t));
            break;
        case 2:
            database.DisplayAll();
            break;
        case 3:
            std::cout << "Enter name: ";
            std::cin >> name;
            database.Display(name);
            break;
        case 4:
            std::cout << "Enter type (0 for CAT, 1 for SANDWICH): ";
            //int t;
            std::cin >> t;
            database.Display(static_cast<baseClasName::eType>(t));
            break;
        case 5:
            quit = true;
            break;
        }
    }
    
}