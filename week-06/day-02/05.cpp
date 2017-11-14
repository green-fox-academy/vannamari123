// Create a `Circle` class that takes it's radius as cinstructor parameter
// It should have a `get_circumference` method that returns it's circumference
// It should have a `get_area` method that returns it's area

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Circle{
private:
    unsigned int radius;

public:
    Circle(unsigned int radius){
        this->radius = radius;
    }

    ~Circle(){
        cout << "End of program" << endl;
    }

    int get_circumference()
    {
        unsigned int circumference = 2 * M_PI * radius;
        return circumference;
    }

    int get_area()
    {
        unsigned int area = 2 * M_PI * pow(radius, 2);
        return area;
    }

};



int main() {

    Circle c1(10);
    cout << "Circumference: " << c1.get_circumference() << " units" << endl;
    cout << "Area: " << c1.get_area() << " units^2" << endl;

    return 0;
}
