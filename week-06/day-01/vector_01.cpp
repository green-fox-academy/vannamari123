#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> my_vector;
    my_vector.push_back(23);
    my_vector.push_back(11);
    my_vector.push_back(45);
    my_vector.push_back(17);
    my_vector.push_back(32);

    for (int i = 0; i < my_vector.size(); ++i){
        cout << my_vector[i] << " ";
    }

    return 0;
}
