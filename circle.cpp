#include "circle.h"

circle :: circle(float a, string c){
	radius = a;
	color = c;
	cout << "circle (float, string) called" << endl;
}

circle :: ~circle(){
	cout << "~circle() called" << endl;
}

float circle :: area(){
	return 3.16*pow(radius, 2);
}
void circle :: print(){
	cout << "Area: " << area() << endl;
}