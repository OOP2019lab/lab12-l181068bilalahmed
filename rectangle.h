#include "shape.h"

class rectangle : public shape{
public:
	float area();
	void print();
	rectangle(float, float, string);
	~rectangle();
private:
	float height;
	float width;
};