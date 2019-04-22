#include "triangle.h"

triangle:: triangle(float a, float b, string c){
	height = a;
	base = b;
	color = c;
	cout << "triangle (float, float, string) called" << endl;
}

triangle:: ~triangle(){
	cout << "~triangle() called" << endl;
}

float triangle :: area(){
	return (height*base)/2;
}

void triangle:: print(){
	cout << "Area: " << area() << endl;
}