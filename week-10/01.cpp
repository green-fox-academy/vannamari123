#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Student{
private:
    vector <int> grades;

public:


    void add_grade(int _grade){
        if (_grade < 1 || _grade > 5){
            cerr << "ERROR: Grade must be between 1 and 5." << endl;
        }
        grades.push_back(_grade);
    }

    double get_average(){
        double sum = 0;

        for (int i = 0; i < grades.size(); i++){
            sum += grades[i];
        }
        return sum / grades.size();
    }

};


int main() {


    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

    Student stud1;

    stud1.add_grade(2);
    stud1.add_grade(3);

    cout << stud1.get_average() << endl;


    return 0;
}
