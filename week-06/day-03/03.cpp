// Still the shape exercise!
// Create public method called how_much_to_paint()
// which should get the area and the price of the paint as parameters
// It shoud return the costs of the paingting


#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Shape{
public:
    virtual float calc_area()=0;
    virtual void print() = 0;
    int how_much_paint(float area, int price){
        return area * price;
    }
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
    float c_area = c.calc_area();
    cout << c.how_much_paint(c_area, 5) << endl;

    Triangle t(10, 15);
    float t_area = t.calc_area();
    cout << t.how_much_paint(t_area, 10) << endl;

    return 0;
}
