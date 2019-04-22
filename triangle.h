#include "shape.h"

class triangle : public shape {
public:
	float area();
	void print();
	triangle (float, float, string);
	~triangle();
private:
	float base;
	float height;
};