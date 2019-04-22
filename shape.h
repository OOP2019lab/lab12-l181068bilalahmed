#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class shape {
protected:
	string type;
public:
	shape();
	shape(string);
	virtual ~shape ();
	string color;
	virtual float area();
	virtual void print();
	
};





