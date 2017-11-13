#include <iostream>
#include <string>

using namespace std;

// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Do you like coffee? (as a boolen variable)
//
//  Example output:
//  John Doe
//  31
//  Likes coffee: true

int main()
{
    string name = "Annamari";
    int age = 33;
    bool likes_coffe = true;

    cout << name << endl;
    cout << age << endl;
    cout << "Likes coffe: ";

    if (likes_coffe)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
