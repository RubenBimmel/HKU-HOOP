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

string Subject::getName() {
	return name;
}