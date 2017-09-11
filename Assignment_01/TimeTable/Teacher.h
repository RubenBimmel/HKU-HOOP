#pragma once

#include <iostream>
using namespace std;

class Teacher {
private:
	string name;

public:
	Teacher(string _name);
	Teacher(const Teacher &other);
	Teacher &Teacher::operator=(const Teacher &other);
	~Teacher();
	string getName();
};
