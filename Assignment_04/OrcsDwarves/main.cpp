// OrcsDwarves.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "NPC.h"
#include "Dwarve.h"
#include "Orc.h"
#include "Soldier.h"
#include "Mage.h"
#include <iostream>

int main()
{
	NPC* elwan = new Dwarve("Elwan");
	NPC* hakraldra = new Soldier(new Orc("Hakraldra"));
	NPC* mowkim = new Soldier(new Mage(new Dwarve("Mowkim")));

	elwan->IntroduceYourself();
	std::cout << std::endl;
	hakraldra->IntroduceYourself();
	std::cout << std::endl;
	mowkim->IntroduceYourself();

	return 0;
}

