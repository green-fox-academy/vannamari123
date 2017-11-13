#include <iostream>
#include <string>
#include <vector>

using namespace std;

//create an integer vector with the size of 5 and print the 3rd element of it

int main() {

    vector<int> my_vector;
    my_vector.push_back(23);
    my_vector.push_back(11);
    my_vector.push_back(45);
    my_vector.push_back(17);
    my_vector.push_back(32);

    cout << my_vector.at(2) << endl;

    return 0;
}
