#include "Student.h"

//Default constructor
Student::Student()
	: name("NO_NAME")
{}

//Constructor
Student::Student(string _name)
	: name (_name)
{}

//Adds a module to modules
void Student::addModule(Module* module) {
	modules.push_back(module);
}

//Removes module by value from modules
void Student::removeModule(Module* module) {
	modules.erase(remove(modules.begin(), modules.end(), module));
}

//Return the sum of all EC points from modules
int Student::getTotalEC() {
	int ec = 0;
	for each (Module* module in modules) {
		ec += module->getEC();
	}
	return ec;
}

//Return a string with student name and total EC
string Student::getInformation() {
	return "Student: " + name + " -- EC: " + to_string(getTotalEC());
}