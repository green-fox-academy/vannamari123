// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private method)

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Shape{
 public:
   virtual float calc_area()=0;
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
        return area = 2 * M_PI * pow(radius, 2);
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
};


int main()
{
    Circle c(10);
    cout << "Circle area: " << c.calc_area() << endl;

    Triangle t(9, 15);
    cout << "Triangle area: " << t.calc_area() << endl;

    return 0;
}
