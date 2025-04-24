
#include "Point.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#define DEBUG
#define XBOX
#define PS
#define SWITCH
using names_t = std::vector<std::string>;
namespace math {
#define NAME "Fuwawa and Mococo!!!!"
#define PI 3.141592f
#define WOOF "Bau"
template<typename T> 

T max(T a, T b) {

    return (a > b) ? a : b;
}
}

void fuwawa(const names_t& mococo) {
    for (std::string name : mococo) {
        std::cout << name << std::endl;
    }
}


template<typename T>

void streamOut(std::ostream& ostream, const T& text) {
    ostream << text << std::endl;

}
void streamIn(std::istream& istream, std::string& text) {
    std::getline(istream, text);
    istream >> text;
}

int main() {

#ifdef _DEBUG
    std::cout << "program start\n";

#endif

#ifdef XBOX
    //xbox code here
#endif







    math::ipoint_t p(4, 5);

    std::cin >> p;

    streamOut(std::cout, NAME);
    std::cout << PI << std::endl;
    std::ofstream fstream("text.txt");
    streamOut(fstream, p);
    streamOut(fstream, "Bau ~");
    streamOut(fstream, 5);
    fstream.close();

    std::string text;
    
    std::ifstream ifstream("text.txt");
    if (ifstream.is_open()) {
        while (std::getline(ifstream, text)) {
        std::cout << text << std::endl;
        
        }
        //streamIn(ifstream, text);
        ifstream.close();
    }


   /* streamIn(std::cin, text);
    std::cout << text << std::endl;*/



    math::ipoint_t p1(23, 34);
    math::ipoint_t p2(12, 10);
    math::ipoint_t p3;
    p3 = p1 - p2;

    std::cout << p3 << std::endl;
    //std::cout << p1.Add(p2) << std::endl;
    std::cout << p3.getX() << " " << p3.getY() << std::endl;





    std::cout << std::max(5, 10) << std::endl;
    std::cout << math::max(6, 10) << std::endl;

    names_t moco{ "Mococo", "Fuwawa", "Gura", "Raora", "Nyanners", "Bao", "Shylilly", "Iron Mouse", "GirlDM", "Fillian", "Ouro Kroni", "Mori Calliope", "Amelia Watson", "Pipkin Pippa", "Fauna", "Marine", "Pekora", "Koseki Bijou", "Chibidoki"};
    fuwawa(moco);
    
}
