#pragma once

#include <iostream>

using namespace std;

class Teacher {
private:
	string name;

public:
	Teacher();
	Teacher(string _name);

	string getName();
};