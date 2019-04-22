#include "shape.h"

class circle : public shape{
public:
	float area();
	void print();
	circle (float, string);
	~circle();
private:
	float radius;
};