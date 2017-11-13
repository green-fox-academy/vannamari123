//Create a vector of integers
//reserve place for 10 element, then fill those place with random numbers between 0 and 10

#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {

    vector<int> num_vector(10);

    for (int i = 0; i < num_vector.size(); i++){
        num_vector.at(i) = rand() % 10 + 1;
        cout << num_vector[i] << " ";
    }

    return 0;
}
