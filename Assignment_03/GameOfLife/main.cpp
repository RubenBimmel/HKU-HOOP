#include "stdafx.h"
#include "Grid.h"


int main()
{
	Grid* grid = new Grid();
	grid->print();
	
	grid->setRules(Grid::defaultRules);

	for (int i = 0; i < 20; i++) {
		grid->updateGrid();
		grid->print();
	}

	return 0;
}

