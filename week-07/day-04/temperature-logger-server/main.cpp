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

    SerialPortWrapper *serial = new SerialPortWrapper("COM4", 115200);

    string line;
    string command;
    vector <string> input;

    start_screen();

    while(command != "e")
    {
        cin >> command;

        if(command == "h"){
            start_screen();
        }

        if (command == "o"){
            serial->openPort();
            cout << "Port is open." << endl;
        }

        if (command =="s"){
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
  //      else if (command == "s"){
  //          cout << "Port is not open. Open port to start logging." << endl;

        if (command == "c"){
            serial->closePort();
            cout << "Port is closed." << endl;
        }

    }









    return 0;
}
