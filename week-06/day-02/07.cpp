// create a pirate class
// it should have 2 methods
// drink_rum()
// hows_goin_mate()
// if the drink_rum was called at least 5 times:
// hows_goin_mate should return "Arrrr!"
// "Nothin'" otherwise

#include <iostream>
#include <string>

using namespace std;


class Pirate{
public:
    int i = 0;

    void drink_rum()
    {
        i++;
        hows_going_mate(i);
    }

    void hows_going_mate(int i)
    {
        if (i < 5){
            cout << "Nothin' " << endl;
        } else {
            cout << "Arrrr! " << endl;
        }
    }
};


int main()
{
    Pirate p1;
    p1.drink_rum();
    p1.drink_rum();
    p1.drink_rum();
    p1.drink_rum();
    p1.drink_rum();
    p1.drink_rum();

    return 0;
}
