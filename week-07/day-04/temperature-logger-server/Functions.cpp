#include <iostream>
#include "Functions.h"
using namespace std;

void start_screen(){
 cout << "==============================" << endl << "Temperature Logger Application " << endl << "==============================" << endl;
            cout << " Commands:" << endl << "h    Show command list" << endl;
            cout << "o    Open port" << endl << "s    Start logging / Stop logging" << endl;
            cout << "c    Close port" << endl << "l   List after error handling" << endl;
            cout << "e    Exit from the program" << endl;
}
