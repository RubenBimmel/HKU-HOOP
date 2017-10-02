#include "RulesVariation1.h"

RulesVariation1::RulesVariation1() {}

vector< vector <bool> > RulesVariation1::applyRules(vector< vector <bool> > grid) {
	vector< vector <bool> > newGrid = vector< vector <bool> >(grid);
	int neighbours = 0;
	int prevNeighbours = 0;

	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			neighbours = 0;

			if (i > 0 && j > 0)   neighbours += (int)grid[i - 1][j - 1];
			if (i > 0)            neighbours += (int)grid[i - 1][j];
			if (i > 0 && j < 24)  neighbours += (int)grid[i - 1][j + 1];
			if (j > 0)            neighbours += (int)grid[i][j - 1];
			if (j < 24)           neighbours += (int)grid[i][j + 1];
			if (i < 24 && j > 0)  neighbours += (int)grid[i + 1][j - 1];
			if (i < 24)           neighbours += (int)grid[i + 1][j];
			if (i < 24 && j < 24) neighbours += (int)grid[i + 1][j + 1];

			if (grid[i][j]) {
				if (neighbours > 5)  newGrid[i][j] = false;
				if (neighbours == prevNeighbours) newGrid[i][j] = false;
			}
			else {
				if (neighbours == 4) newGrid[i][j] = true;
			}

			prevNeighbours = neighbours;
		}
	}

	return newGrid;
}