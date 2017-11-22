#include <iostream>
using namespace std;

// Create a Class named Integer. It should have one int member variable.
// Create add() methods to it. They should take Integer& parameters.
// Make variations of add() method 1, 2, 3, 4 and 5 arguments respectively.
// All methods should add the value of the parameters to the member variable of this.
//
// Try them out. Write code that demonstrates how they work.


class Integer{
private:
    int mNum;
public:
    Integer (int _num){
        this->mNum = _num;
    }

    int get(){
        return mNum;
    }

    Integer(Integer& _obj, int mNum){
        this-> mNum = _obj.get() + mNum;
    }

    int add(int mNum){
        return this -> mNum += mNum;
    }

    int add(int mNum, int num_one){
        return this -> mNum += mNum + num_one;
    }

    int add(int mNum, int num_one, int num_two){
        return this -> mNum += mNum + num_one + num_two;
    }

    int add(int mNum, int num_one, int num_two, int num_three){
        return this -> mNum += mNum + num_one + num_two + num_three;
    }

    int add(int mNum, int num_one, int num_two, int num_three, int num_four){
        return this -> mNum += mNum + num_one + num_two + num_three + num_four;
    }



};

int main() {
    Integer number(10);
    cout << number.add(1) << endl;
    cout << number.add(1, 2) << endl;
    cout << number.add(1, 2, 3) << endl;
    cout << number.add(1, 2, 3, 4) << endl;
    cout << number.add(1, 2, 3, 4, 5) << endl;

    return 0;
}
