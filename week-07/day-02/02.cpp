#include <iostream>
using namespace std;

// Now, create 2 functions. They should bear the same name.
// These functions should multiple their parameters.
// The first should return float and take two arguments of the type float.
// The second function should return int and take two arguments of integer type.
// Use these two functions and print out the results.
//
// Compile the code You wrote. Note the output of the compiler. Think about it, google it.
// Now, put one of the functions into comment. (So it's still legible but won't compile.)
// Try compiling it again, and watch what the results are.
//
// Switch the two function declarations. Ucomment the one You commented out and comment out the one
// that ran before. Compile it and compare the results again.
//
// What did You learn from this exercise?
// Write it down in a comment into Your file!


float adder (float num1, float num2){
    return num1 + num2;
}

/*int adder (int n1, int n2){
    return n1 + n2;
}*/


int main() {
    cout << adder(2.34, 3.15) << endl;
    cout << adder(2, 3) << endl;

    //When both functions called the compiler could not build the project because the function was ambiguous.
    // When one function was commented, the compiler could compile. The type of the return value was determined by the tupe of the function's return value.

    return 0;
}
