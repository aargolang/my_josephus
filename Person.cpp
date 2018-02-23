#include "Person.h"

Person::Person() {}
Person::Person(int pos) {
	this->position = pos;
}
Person::~Person()
{
}

void Person::print()
{
	cout << this->position;
}	
