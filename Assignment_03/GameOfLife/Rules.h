#pragma once
#include <vector>

using namespace std;

class Rules {
public:
	int test;
	Rules();
	virtual vector< vector <bool> > applyRules(vector< vector <bool> > grid) = 0;
};
