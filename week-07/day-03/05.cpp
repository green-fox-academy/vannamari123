#include <iostream>
using namespace std;

// Take the Integer class from the previous exercise.
// Create 3 constructors for them:
// One empty which sets the member varibale to 0;
// A copy constructor, that takes an Integer& argument
// A third one which takes an int as argument and makes the member variable equal to the int it took.
//
// Write code that uses these and prints out the value of the member variable of the integers created.
// (You will have to create a get method to do this appropriately.)


class Integer{
private:
    int mNum;
public:
    Integer(){
        mNum = 0;
    }

    Integer(Integer& _obj){
        this-> mNum = _obj.get();
    }

    Integer (int _num){
        mNum = _num;
    }

    int get(){
        return mNum;
    }


};

int main() {
    Integer number;
    cout << number.get() << endl;

    Integer number2(10);
    cout << number2.get() << endl;

    Integer number3(number2);
    cout << number3.get() << endl;

    return 0;
}
