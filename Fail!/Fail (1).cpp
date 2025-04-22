#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"

using namespace std;



class Circle : public Shape {
public:
    Circle(float r) { m_radius = r; }
    ~Circle() {}

    float Area() override {
        return 3.14f * m_radius * m_radius;
    }

    void SetRadius(float radius) { radius = radius; }
    float GetRadius() { return m_radius; }

private:
    float m_radius;
};

class Rectangle : public Shape {
public:
    Rectangle(float w, float h) {
        m_width = w;
        m_height = h;
    }

    float Area() override {
        return m_width * m_height;
    }

private:
    float m_width;
    float m_height;
};

int main() {
    vector<Shape*> shapes;

    Circle* c = new Circle(1.0f);
    c->SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

    shapes.push_back(c);
    shapes.push_back(r);

    for (int i = 0; i < shapes.size(); i++)
    {
        // TODO: If shape is a circle, print radius
        Circle* circle = dynamic_cast<Circle*>(shapes[i]);
        if (circle) {
        cout << "Area: " << shapes[i]->Area() << endl;
        }
    }

    // FIXME: Getting memory leak! Delete all shapes.
    for (Shape* s : shapes) {
        delete s;
    }
    shapes.clear();
    

    return 0;
};
