#include <iostream>
#include <string>

using namespace std;

// store your personal data in Variables
// string name, int age, int slice_of_pizza_you_can_eat
// allocate memory dynamically for these variables
// create a sentense using these variables
// free the allocated memory


int main() {

    string *name;
    int *age;
    int *slice_of_pizza_you_can_eat;

    name = new string;
    *name = "Elek";

    age = new int;
    *age = 23;

    slice_of_pizza_you_can_eat = new int;
    *slice_of_pizza_you_can_eat = 12;

    cout << *name << " is " << *age << " old and he can eat " << *slice_of_pizza_you_can_eat << " slices of pizza." << endl;

    delete name;
    delete age;
    delete slice_of_pizza_you_can_eat;

    return 0;
}
