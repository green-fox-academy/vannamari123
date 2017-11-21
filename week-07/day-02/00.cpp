// create a function that adds two integers.
// Create an other function of the same name that takes 3 integers and returns the result of adding these 3 integers.
// Write code that uses both after one an other and prints out the results in a new line each.
// For input use 1 and 2, then 1, 2 and 3.


#include <iostream>
using namespace std;


int adder (int num1, int num2){
    return num1 + num2;
}

int adder (int num1, int num2, int num3){
    return num1 + num2 + num3;
}


int main() {
    cout << adder(1, 2) << endl;
    cout << adder(1, 2, 3) << endl;

    return 0;
}
