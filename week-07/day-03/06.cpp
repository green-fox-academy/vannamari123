#include <iostream>
using namespace std;

// Take the Integer class from the previous exercise and add two methods:
// One which takes an Integer& parameter and adds the value of it to the member variable of this.
// One which takes an int and adds the value of it to the member variable of this.
//
// Write code which uses them both and Prints out the results respectively.

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

    int add(Integer& _obj){
        return this->mNum += _obj.get();
    }

    int add(int _num){
        return this->mNum += _num;
    }


};

int main() {
    Integer number;
    Integer number2(10);
    Integer number3(number2);

    cout << number3.get() << endl;
    cout << number3.add(number) << endl;
    cout << number3.add(12) << endl;

    return 0;
}
