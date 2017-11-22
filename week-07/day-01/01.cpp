#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {

    int a = 12;
    int b = 12;

    try {
        if (b == 0){
            throw 1;
        }

        cout << a << " / " << b << " = " << a/b << endl;

    } catch (int x) {
        cout << "Error: " << x << endl << "The divider can not be 0" << endl;

    }

    return 0;
}
