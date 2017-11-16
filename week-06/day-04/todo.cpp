
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Todo {
    string task;
    int priority;
};



void prints(){
    cout << "Todo application" << endl
    << "==================== " << endl
    << "Commands:" << endl
    << "-a   Adds a new task" << endl
    << "-wr  Write current todos to file" << endl
    << "-rd  Read todos from a file" << endl
    << "-l   Lists all the tasks" << endl
    << "-e   Empty the list" << endl
    << "-rm   Removes a task" << endl
    << "-c   Completes a task" << endl
    << "-p   Add priority to a task" << endl
    << "-lp  Lists all the tasks by priority " << endl << endl;
}





int main() {
    prints();

    return 0;
}
