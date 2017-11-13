#include <iostream>

using namespace std;

// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours is spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{
    int daily_hours = 6;
    int days_week = 5;
    int semester_weeks = 17;
    int total_coding = daily_hours * days_week * semester_weeks;
    float average_work_hours = 52;

    cout << "Total coding hours: " << total_coding << endl;
    cout << "Coding hours of work week: " << daily_hours * days_week * 100 / average_work_hours << "%" << endl;

    return 0;
}
