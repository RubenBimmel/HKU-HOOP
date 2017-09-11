#include "SchoolClass.h"

//constructor
SchoolClass::SchoolClass(string _name)
	: name(_name)
{}

//copy constructor
SchoolClass::SchoolClass(const SchoolClass &other) {
	name = other.name;
}

//assigment opperator
SchoolClass &SchoolClass::operator=(const SchoolClass &other) {
	name = other.name;
	return *this;
}

//destructor
SchoolClass::~SchoolClass() {
}

//Gets called to display the name of this schoolClass
string SchoolClass::getName() {
	return name;
}