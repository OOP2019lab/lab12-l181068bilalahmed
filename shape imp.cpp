#include "shape.h"

float shape :: area(){
	return 0.0;
}

shape :: shape(){
	color = "";
}

shape :: shape(string c){
	color = c;
	cout << "shape(string) called" << endl;
}

shape :: ~shape(){
	cout << "~shape() called" << endl;
}

void shape :: print(){
	cout << "Area: " << area() << endl;
}