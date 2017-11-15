// Countinue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)


#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Shape{
public:
    virtual float calc_area()=0;
    virtual void print() = 0;
};

class Circle: public Shape{
private:
    float radius;
    float area;
public:

    Circle(int radius){
        this->radius = radius;
    }

    float calc_area(){
        return area = M_PI * pow(radius, 2);
    }

    void print(){
        cout << "Circle radius: " << radius << endl << "Circle Area: "<< calc_area() << endl << endl;;
    }
};

class Triangle: public Shape{
private:
    float base;
    float height;
    float area;
public:

    Triangle(int base, int height){
        this->base = base;
        this->height = height;
    }

    float calc_area()
    {
        return area = base * height / 2;
    }

    void print(){
        cout << "Triangle base: " << base << endl << "Triangle height: " << height << endl << "Triangle area: "<< calc_area() << endl;
    }


};


int main()
{
    Circle c(10);
    c.print();

    Triangle t(10, 15);
    t.print();

    return 0;
}
