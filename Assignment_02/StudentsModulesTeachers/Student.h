#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "Module.h"

using namespace std;

class Student {
private:
	string name;
	vector<Module*> modules;

public:
	Student();
	Student(string _name);

	void addModule(Module* module);
	void removeModule(Module* module);

	int getTotalEC();
	string getInformation();
};