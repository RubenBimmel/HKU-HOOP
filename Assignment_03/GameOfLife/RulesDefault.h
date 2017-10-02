#pragma once

#include "Rules.h"

class RulesDefault : Rules {
public:
	RulesDefault();
	vector< vector <bool> > applyRules(vector< vector <bool> > grid);
private:

};