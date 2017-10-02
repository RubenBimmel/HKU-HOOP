#include "stdlib.h"
#include <iostream>
#include "Grid.h"

Grid::Grid() {
	grid = vector< vector<bool> >(25, vector<bool>(25, false));
	randomise();
}

void Grid::randomise() {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			grid[i][j] = (int) rand() % 2;
		}
	}
}

void Grid::print() {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			if (grid[i][j]) {
				std::cout << " O";
			}
			else {
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

void Grid::setRules(RuleSet newRules) {
	delete rules;
	
	switch (newRules)
	{
	case defaultRules:
		rules = (Rules*) new RulesDefault();
		break;
	case variation1:
		rules = (Rules*) new RulesVariation1();
		break;
	case variation2:
		rules = (Rules*) new RulesVariation2();
		break;
	}
}

void Grid::updateGrid() {
	grid = rules->applyRules(grid);
}
