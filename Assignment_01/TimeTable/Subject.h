#pragma once

#include <iostream>
using namespace std;

class Subject {
private:
	string name;

public:
	Subject(string _name);
	Subject(const Subject &other);
	Subject &Subject::operator=(const Subject &other);
	~Subject();
	string getName();
};