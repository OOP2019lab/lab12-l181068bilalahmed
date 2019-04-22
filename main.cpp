#include <iostream>
#include <conio.h>
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

using namespace std;

float sumArea(shape& a, shape& b){
	float sum = 0;
	sum = a.area() + b.area();
	return sum;
}

void shapeArray(){
	int count = 5;
	shape **shapesArray = new shape *[5];
	string c;
	for (int i =0;i < count;){
			cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
  	switch (getch()){
        	case '1':
				int b, h;
				cout << "Enter base and height: ";
				cin >> b >> h;
				cout << endl;
				cout << "Enter color: ";
				cin >> c;
				shapesArray[i] = new triangle(h, b, c);
				i++;
				break;
        	case '2':
				int l, w;
				cout << "Enter lenght and width: ";
				cin >> l >> w;
				cout << endl;
				cout << "Enter color: ";
				cin >> c;
				shapesArray[i] = new rectangle(l, w, c);
				i++;
              	break;
 
        	case '3':
				int r; 
              	cout << "Enter radius: ";
				cin >> r;
				cout << endl;
				cout << "Enter color: ";
				cin >> c;
				shapesArray[i] = new circle(r, c);
				i++;
              	break;
 
   	 	default:
              	cout<<"Invalid input. Enter again." <<endl<<endl;
              	break;
	}
	}
	for (int i = 0; i < 5; i++){
		shapesArray[i]->print();
	}
	delete[] shapesArray;
}



int main(){

	triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	shape s1("Purple");
	cout << endl;
	cout<<t1.area() << endl;
	cout<<t1.color << endl;
	cout<<c1.area() << endl;
	cout<<r1.area() << endl;

	shape *sptr= &t1;
	shape &sref=r1;
	cout<< sptr->area() << endl;
	cout<< sptr->color << endl;
	cout<< sref.color << endl;
	cout<< sref.area() << endl;

	cout << "------" << endl;

	cout<<sumArea(t1,c1) << endl;
	cout<<sumArea(s1,r1) << endl;
	cout<<sumArea(s1,t1) << endl;

	cout << "------" << endl;
	shapeArray();

	cout << "--------" << endl;

	//shape *s1= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
	//delete &s1; //identify which destructor in invoked


	system("pause");
	return 0;
}