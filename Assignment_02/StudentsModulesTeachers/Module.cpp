#include "Module.h"

//Default constructor
Module::Module()
	: name("NO_NAME"),
	ec(0)
{}

//Constructor
Module::Module(string _name, int _ec)
	: name(_name),
	  ec(_ec)
{}

//Update modules teacher
void Module::assignTeacher(Teacher* _teacher) {
	teacher = _teacher;
}

//Retrun a string with module name and teacher
string Module::getInformation() {
	return "Module: " + name + " -- Teacher: " + teacher->getName();
}

//Return EC
int Module::getEC() {
	return ec;
}

//Set EC
void Module::setEC(int _ec) {
	ec = _ec;
}