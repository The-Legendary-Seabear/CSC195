

#include <iostream>
#include "Student.h"
#include "BusDriver.h"
#include "School.h"
#include <vector>
using namespace std;




int main()
{
    School school;

    bool quit = false;
    while(!quit) {
        //display menku
        cout << "1) Add huumon\n";
        cout << "2) Display all huumon\n";
        cout << "3) Display huumon of type\n";
        cout << "4) Quit\n";

        unsigned short selection;
        cin >> selection;
        switch (selection) {
        case 1:
            cout << "1) Student\n";
            cout << "2) Bus Driver\n";
            unsigned short type;
            cin >> type;
    school.add(static_cast<Human::Type>(type - 1));
            break;
        case 2:
        system("cls");
    school.displayAll();
            break;
        case 3:
            break;
        case 4:
            quit = true;
            break;
        default:
            break;
        }

    }

        
}