#pragma once

#include <iostream>
using namespace std;

class SchoolClass {
private:
	string name;

public:
	SchoolClass(string _name);
	SchoolClass(const SchoolClass &other);
	SchoolClass &SchoolClass::operator=(const Subject &other);
	~SchoolClass();
	string getName();
};