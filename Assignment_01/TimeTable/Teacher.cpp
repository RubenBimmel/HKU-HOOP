#include "Teacher.h"

//constructor
Teacher::Teacher(string _name)
	: name(_name)
{}

//copy constructor
Teacher::Teacher(const Teacher &other) {
	name = other.name;
}

//assigment opperator
Teacher &Teacher::operator=(const Teacher &other) {
	name = other.name;
	return *this;
}

//destructor
Teacher::~Teacher() {
}

//Gets called to display the name of this teacher
string Teacher::getName() {
	return name;
}