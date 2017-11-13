//create a vector of integers with the size of 20
//fill this vector with random numbers from 0 to 10
//print the items of the vector
//remove the even numbers, then print the items again

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector <int> my_vector(20);

    cout << "Original vector: " << endl;
    for (int i = 0; i < my_vector.size(); ++i){
        my_vector.at(i) = rand() % 10;
        cout << my_vector[i] << " ";
    }
    cout << endl;

    cout << "Modified vector: " << endl;
    for (int j = 0; j < my_vector.size(); ++j){
        if (my_vector.at(j) % 2 == 0)
            my_vector.at(j) = my_vector.at(j) + 1;
        cout << my_vector[j] << " ";
    }

    cout << endl;

    return 0;
}
