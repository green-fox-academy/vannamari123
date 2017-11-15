// Create a Human class which is a base class for
// SuperHuman and AquaHuman
// Create a virtual function in Human class called travelling()
// It should print out different ways to travel
// For example: Human is walking. SuperHuman is flying. AquaHuman is riding with dolphins.


#include <iostream>
#include <vector>

using namespace std;

class Human{
public:
    virtual void travel(){
        cout << "Human is walking." << endl;
    }
};

class SuperHuman: public Human{
public:
    void travel(){
        cout << "SuperHuman is flying." << endl;

    }
};

class AquaHuman: public Human{
public:
    void travel(){
        cout << "AquaHuman is riding with dolphins." << endl;
    }
};


int main()
{
    Human h;
    h.travel();

    SuperHuman sh;
    sh.travel();

    AquaHuman ah;
    ah.travel();

    return 0;
}
