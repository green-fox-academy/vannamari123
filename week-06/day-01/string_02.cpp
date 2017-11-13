#include <iostream>
#include <string>

using namespace std;

// Define several things as a variable then print their values
// Your name as a string
// Your age as an integer
// Your height in meters as a double
// Whether you are married or not as a boolean

int main()
{
    string name = "Mekk Elek";
    int age = 53;
    float height = 1.75;
    bool married = false;

    cout << name << endl << "Age: " << age << endl << "Height: " << height << endl << "Married:";
    if (married)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
