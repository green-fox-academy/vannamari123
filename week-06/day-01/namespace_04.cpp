#include <iostream>

// Create your own namespace, called Mark
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// Create your own namespace, called Maria
// store your name as a string
// your age as an integer
// and your favorite number as an integer
//
// create a function that can add the two age, and returns it

using namespace std;
namespace Mark {
    string name = "Annamari";
    int age = 33;
    int fav_number = 3;
}

namespace Maria {
    string name = "Annamari";
    int age = 33;
    int fav_number = 3;
}

int add_age(int age1, int age2);


int main()
{
    add_age(Mark::age, Maria::age);
    return 0;
}


int add_age(int age1, int age2)
{
    return age1 + age2;
}
