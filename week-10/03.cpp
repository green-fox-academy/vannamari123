#include <iostream>
#include <string>

using namespace std;

// TASK NO. 3
// Create a class called "Car"
// It should have a "type" property that stores the car's type in a string eg: "Mazda"
// It should have a "km" property that stores how many kilometers it have run
// The km and the type property should be a parmeter in the constructor
// It should have a method called "run" that takes a number and increments the "km" property by it


class Car{
private:
    string type;
    int km;
public:
    int run(int km_to_add){
        return km + km_to_add;
    };

    Car(string _type, int _km){
        type = _type;
        km = _km;}

};


int main() {

    Car car1("Dacia", 120000);
    cout << car1.run(100) << endl;


    return 0;
}
