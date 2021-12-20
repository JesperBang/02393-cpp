#include <iostream>
#include "ex03-library.h"

int main() {
	TemperatureScalesConverter tsc;
		
	bool res = tsc.addMeasurement("C", 20);
	if(!res){
		cout << "tsc.addMeasurement(\"C\", 20); FAILED" << endl;
	}
	else{
		cout << "tsc.addMeasurement(\"C\", 20); SUCCEEDED" << endl;	
	}
	cout << endl;
	
	res = tsc.addMeasurement("F", 30);
	if(!res){
		cout << "tsc.addMeasurement(\"F\", 30); FAILED" << endl;
	}
	else{
		cout << "tsc.addMeasurement(\"F\", 30); SUCCEEDED" << endl;	
	}
	
	cout << endl;
	
	res = tsc.addMeasurement("K", 50);
	if(!res){
		cout << "tsc.addMeasurement(\"K\", 50); FAILED" << endl;
	}
	cout << endl;
		
	cout << "The measurements are:" << endl;
	tsc.print();
	
	return 0;
}