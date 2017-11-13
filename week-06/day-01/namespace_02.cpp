#include <iostream>
#include <string>

using namespace std;

// Create your own namespace, called Person
// store your name as a string
// your age as an integer
// and your favorite number as an integer
// write them out in main()

namespace Person{
    std::string name = "Annamari";
    int age = 31;
    int fav_number = 13;
}


int main()
{
    cout << Person::name << endl << Person::age << endl << Person::fav_number << endl;

    return 0;
}
