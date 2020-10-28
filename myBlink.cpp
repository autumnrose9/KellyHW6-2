#include "derek_LED.h"

int main(int argc, char* argv[])
{
	if(argc!=4){
		cout << "Usage is makeLEDs <command>" << endl;
		cout << "   command is one of: on, off, blink, flash or status" << endl;
		cout << " e.g. makeLEDs flash 1" << endl;
	}
	else
	{
		cout << "Starting the makeLEDs program" << endl;
		string cmd(argv[1]);
		LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
		int i = stoi(argv[2]);
		int LEDnum = stoi(argv[3]);
		
		if(cmd=="on")leds[i].turnOn();
		else if(cmd=="blink")leds[i].blink(LEDnum);
		else if(cmd=="off")leds[i].turnOff();
		else if(cmd=="flash")leds[i].flash("100"); //default is "50"
		else if(cmd=="status")leds[i].outputState();
		else{ cout << "Invalid command!" << endl; }

		cout << "Finished the makeLEDs program" << endl;
	 	return 0;
	}
}
