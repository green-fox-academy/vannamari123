// The market price of the houses is 400 EUR / square meters
// Make the get_price() function work
// Create a constructor for the House class that takes it's address and area.

#include <iostream>
#include <string>

using namespace std;

class House {
private:
    string address;
    unsigned int area;
    unsigned int price;
public:
    House (string address, unsigned int area){
        this-> address = address;
        this-> area = area;
    }

    ~House(){
        cout << "End of program" << endl;
    }

    unsigned int get_price()
    {
        this->price = area * 400;
        return this->price;
    }
};

int main() {

    House house = House("Andrassy 66", 10);
    cout << house.get_price() << " EUR" << endl;

    return 0;
}
