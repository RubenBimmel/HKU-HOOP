#include "RulesVariation2.h"

RulesVariation2::RulesVariation2() {}

vector< vector <bool> > RulesVariation2::applyRules(vector< vector <bool> > grid) {
	vector< vector <bool> > newGrid = vector< vector <bool> >(grid);

	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			int neighbours = 0;

			if (i > 0 && j > 0)   neighbours += 1 * (int)grid[i - 1][j - 1];
			if (i > 0)            neighbours += 3 * (int)grid[i - 1][j];
			if (i > 0 && j < 24)  neighbours += 1 * (int)grid[i - 1][j + 1];
			if (j > 0)            neighbours += 2 * (int)grid[i][j - 1];
			if (j < 24)           neighbours += 1 * (int)grid[i][j + 1];
			if (i < 24 && j > 0)  neighbours += 4 * (int)grid[i + 1][j - 1];
			if (i < 24)           neighbours += 2 * (int)grid[i + 1][j];
			if (i < 24 && j < 24) neighbours += 1 * (int)grid[i + 1][j + 1];

			if (grid[i][j]) {
				if (neighbours < 6)  newGrid[i][j] = false;
				if (neighbours > 12)  newGrid[i][j] = false;
			}
			else {
				if (neighbours == 5)  newGrid[i][j] = true;
			}
		}
	}

	return newGrid;
}