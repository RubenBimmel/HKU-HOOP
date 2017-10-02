#pragma once

#include <vector>
#include "Rules.h"
#include "RulesDefault.h"
#include "RulesVariation1.h"
#include "RulesVariation2.h"

using namespace std;

class Grid {
public:
	enum RuleSet {
		defaultRules, variation1, variation2
	};
	Grid();
	void randomise();
	void print();
	void setRules(RuleSet rules);
	void updateGrid();

private:
	vector< vector<bool> > grid;
	Rules *rules;
};
