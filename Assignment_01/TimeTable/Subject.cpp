#include "Subject.h"

//constructor
Subject::Subject(string _name)
	: name(_name)
{}

//copy constructor
Subject::Subject(const Subject &other) {
	name = other.name;
}

//assigment opperator
Subject &Subject::operator=(const Subject &other) {
	name = other.name;
	return *this;
}

//destructor
Subject::~Subject() {
}

//Gets called to display the name of this subject
string Subject::getName() {
	return name;
}