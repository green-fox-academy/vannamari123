#include <iostream>
using namespace std;

// Create 3 functions: each should take respectively 2, 3 and 4 strings.
// Each should return a string that contains all the input string concatenated.
// (Combined into one in a linear order.)
// Write code that showcases how this works and prints out the result of the function.


string str_combiner (string str1, string str2){
    return str1 + str2;
}

string str_combiner (string str1, string str2, string str3){
    return str1 + str2 + str3;
}

string str_combiner (string str1, string str2, string str3, string str4){
    return str1 + str2 + str3 + str4;
}


int main(){
    cout << str_combiner("Fiam", "ha") << endl ;
    cout << str_combiner("fogat", "mostal", "ne") << endl;
    cout << str_combiner("feledd", "becsukni", "a", "szadat.") << endl;

    return 0;
}
