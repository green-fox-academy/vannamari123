#include <iostream>
#include <string>
#include <vector>
#include <numeric>

// Create a student Class
// that has a method `add_grade`, that takes a grade from 1 to 5
// an other method `get_average`, that returns the average of the
// grades

using namespace std;

class Student{
    vector <int> grades;
public:
    void add_grade(int grade)
    {
        if (grade > 5 || grade < 1){
            cout << "Grade has to be between 1 and 5. " << endl;
        } else{
            grades.push_back(grade);
        }
    }

    double get_average(){
        double sum = 0;
        double avg = 0;
            for (int i = 0; i < grades.size(); i++){
                sum += grades[i];
        }
        return avg = sum / grades.size();
    }
};


int main()
{
    Student s1;
    Student s2;

    s1.add_grade(4);
    s1.add_grade(3);  
    cout << s1.get_average() << endl;

    s2.add_grade(4);
    s2.add_grade(2);
    cout << s2.get_average() << endl;

    return 0;
}
