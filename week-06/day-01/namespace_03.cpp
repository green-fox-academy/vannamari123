#include <iostream>

// Use your costume namespace from the last exercise
// Create a function, which takes the age as a parameter
// and returns the year when you were born

using namespace std;

namespace Person
{
    std::string name = "Annamari";
    int age = 33;
    int fav_number = 13;
}

int birth_year(int age);

int main()
{
    cout << birth_year(Person::age) << endl;

    return 0;
}



int birth_year(int age)
{
    return 2017 - age;
}
