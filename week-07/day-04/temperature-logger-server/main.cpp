#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cstdlib>
#include <conio.h>

#include "Functions.h"
#include "SerialPortWrapper.h"

using namespace std;

int main()
{
    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }

    // connection

    SerialPortWrapper *serial = new SerialPortWrapper("COM3", 115200);

    string line;
    string input;

    cout << endl << "Welcome to Temperature Logger Application!" << endl << endl << endl << "To display command list press: h" << endl << "To exit press: e" << endl << endl;

    cin >> input;
    do {
        if(input == "h"){
                start_screen();
            /*cout << "==============================" << endl << "Temperature Logger Application " << endl << "==============================" << endl;
            cout << " Commands:" << endl << "h    Show command list" << endl;
            cout << "o    Open port" << endl << "s    Start logging / Stop logging" << endl;
            cout << "c    Close port" << endl << "l   List after error handling" << endl;
            cout << "e    Exit from the program" << endl;*/
        } else if (input == "e"){
            exit(0);
        }

        cin >> input;
        if (input == "o"){
            serial->openPort();
            cout << "Port is open." << endl;
            cin >> input;
            if (input =="s"){
                while(1){
                    serial->readLineFromPort(&line);
                        if (line.length() > 0){
                            cout << line << endl;
                        }
                        if (_kbhit()){
                            if (getchar() == 's')
                                break;
                        }
                }
            }
        } else if (input == "s"){
            cout << "Port is not open. Open port to start logging." << endl;
        }

        if (input == "c"){
            serial->closePort();
        }

    }
    while(input != "e");




    return 0;
}
