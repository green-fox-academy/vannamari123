#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cstdlib>
#include <conio.h>
#include <sstream>
#include <iomanip>

#include "Functions.h"
#include "SerialPortWrapper.h"

using namespace std;

struct temperature_record {
	long timestamp;
	int temperature;
};

temperature_record parseString(string line) {
	int temperature;

	istringstream exampleStream(line);
	tm parsedDateTime;
	exampleStream >> get_time(&parsedDateTime, "%Y.%m.%d %H:%M:%S")
			>> temperature;
	if (exampleStream.fail()) {
		throw "Invalid string format!";
	}


	if (-273 > temperature || 1000 < temperature) {
		throw "Temperature is out of range!";
	}

	long timestamp = mktime(&parsedDateTime);

	temperature_record rec;
	rec.temperature = temperature;
	rec.timestamp = timestamp;
	return rec;
}
;




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
    int flag;
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
            flag = 1;
        }

        if (command =="s"){
          if (flag == 1){
            while(1){
                serial->readLineFromPort(&line);
                    if (line.length() > 0){
                        cout << line << endl;
                        temperature_record good = parseString(line)
                    }
                    if (_kbhit()){
                        if (getchar() == 's')
                            break;
                    }
                }
            } else {
                cout << "First you need to open port to start logging." << endl;
            }
            }

        if (command == "c"){
            serial->closePort();
            cout << "Port is closed." << endl;
            flag = 0;
        }

        if (command == "l"){

        }

    }









    return 0;
}
