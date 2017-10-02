#include "RulesDefault.h"

RulesDefault::RulesDefault() {}

vector< vector <bool> > RulesDefault::applyRules(vector< vector <bool> > grid) {
	vector< vector <bool> > newGrid = vector< vector <bool> >(grid);
	
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			int neighbours = 0;

			if (i > 0 && j > 0)   neighbours += (int)grid[i - 1][j - 1];
			if (i > 0)            neighbours += (int)grid[i - 1][j];
			if (i > 0 && j < 24)  neighbours += (int)grid[i - 1][j + 1];
			if (j > 0)            neighbours += (int)grid[i][j - 1];
			if (j < 24)           neighbours += (int)grid[i][j + 1];
			if (i < 24 && j > 0)  neighbours += (int)grid[i + 1][j - 1];
			if (i < 24)           neighbours += (int)grid[i + 1][j];
			if (i < 24 && j < 24) neighbours += (int)grid[i + 1][j + 1];

			if (grid[i][j]) {
				if (neighbours < 3)  newGrid[i][j] = false;
				if (neighbours > 4)  newGrid[i][j] = false;
			}
			else {
				if (neighbours == 3)  newGrid[i][j] = true;
			}
		}
	}

	return newGrid;
}