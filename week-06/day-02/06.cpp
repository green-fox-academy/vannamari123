// Create a class called "Car"
// It should have a "type" property that stores the car's type in a string eg: "Mazda"
// It should have a "km" property that stores how many kilometers it have run
// The km and the type property should be a parmeter in the constructor
// It should have a method called "run" that takes a number and increments the "km" property by it

#include <iostream>
#include <string>

using namespace std;

class Car{
private:
    string type;
    int km;

public:
    Car(string type, int km){
        this->type = type;
        this->km = km;
    }
    
    ~Car(){
        cout << "End of program" << endl;
    }

    int run (int number){
        km = km + number;
        return km;
    }

};


int main()
{
    Car c1("Mazda", 23);
    cout << c1.run(100) << endl;

    return 0;
}
