#include "ClassDataBases.h"
#include "Classes.h"
#include "Cat.h"
#include "Sandwich.h"


ClassDataBases::~ClassDataBases() {
    for (baseClasName* obj : objects)
    {
        delete obj;
    }
}

void ClassDataBases::Create(baseClasName::eType type) {
    baseClasName* obj = nullptr;
    switch (type)
    {
    case baseClasName::eType::CAT:
        obj = new Cat;
        break;
    case baseClasName::eType::SANDWICH:
        obj = new Sandwich;
        break;
    }
    obj->Read(std::cout, std::cin);
    objects.push_back(obj);
}

void ClassDataBases::Display(const std::string& name) {
    for (baseClasName* obj : objects)
    {
        if (obj->getName() == name)
        {
            obj->Write(std::cout);
        }
    }
}

void ClassDataBases::Display(baseClasName::eType type) {
    for (baseClasName* obj : objects) {
        if (obj->GetType() == type) {
            obj->Write(std::cout);
        }
    }
}

void ClassDataBases::DisplayAll() {
    for (baseClasName* obj : objects) {
        obj->Write(std::cout);
    }
}