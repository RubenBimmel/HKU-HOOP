#pragma once

#include <iostream>

#include "Teacher.h"

using namespace std;

class Module {
private:
	Teacher* teacher;
	string name;
	int ec;

public:
	Module();
	Module(string _name, int _ec);

	void assignTeacher(Teacher* _teacher);
	string getInformation();

	int getEC();
	void setEC(int _ec);
};