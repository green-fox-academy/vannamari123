#include <iostream>
#include <stdexcept>

using namespace std;

// Write a try - catch block.
// Throw an char in the try block
// Catch it in the catch block and write it out.

int main() {
    int a = 12;
    int b = 0;

    try {
        if (b == 0){
            throw "Cannot divide by 0";
        }

        cout << a << " / " << b << " = " << a/b << endl;

    } catch (const char *error) {
        cout << error << endl;
    }

    return 0;
}
