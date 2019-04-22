#include "rectangle.h"

rectangle :: rectangle(float a, float b, string c){
	height = a;
	width = b;
	color = c;
	cout << "rectangle(float, float, string) called" << endl;
}

rectangle :: ~rectangle(){
	cout << "~rectangle()" << endl;
}

float rectangle :: area(){
	return height* width;
}

void rectangle :: print(){
	cout << "Area: " << area() << endl;
}