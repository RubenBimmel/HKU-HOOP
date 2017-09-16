#include "Teacher.h"

//Default constructor
Teacher::Teacher()
	: name("NO_NAME")
{}

//Constructor
Teacher::Teacher(string _name)
	: name(_name)
{}

//return name
string Teacher::getName() {
	return name;
}