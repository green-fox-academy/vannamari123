#include <iostream>
#include <string>

using namespace std;


//TASK NO. 4
    //Create Animal class
    //Every animal has a hunger value, which is a whole number
    //Every animal has a thirst value, which is a whole number
    //when creating a new animal object these values are created with the default 50 value
    //Every animal can eat() which decreases their hunger by one
    //Every animal can drink() which decreases their thirst by one
    //Every animal can play() which increases both by one


class Animal{
private:
    int hunger;
    int thirst;
public:
    Animal(){
        hunger = 50;
        thirst = 50;
    }

    void eat(){
        hunger--;
    }

    void drink(){
        thirst--;
    }

    void play(){
        hunger++;
        thirst++;
    }

    void print(){
        cout <<"Hunger value: " << hunger << endl << "Thirst value: " << thirst << endl;
    }

};


int main(){

    Animal zebra;
    zebra.eat();
    zebra.eat();
    zebra.drink();
    zebra.play();
    zebra.play();

    zebra.print();



    return 0;
}
