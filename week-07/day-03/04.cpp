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


};

int main() {
    Integer num1(20);
    cout << num1.add(12) <<endl;

    return 0;
}
