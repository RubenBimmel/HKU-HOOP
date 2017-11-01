// OrcsDwarves.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "NPC.h"
#include <iostream>

int main()
{
	NPC* elwan = NPC::createNPC("Elwan", Race::Dwarve);
	NPC* hakraldra = NPC::createNPC("hakraldra", Race::Orc, Profession::Farmer);
	NPC* mowkim = NPC::createNPC("mowkim", Race::Orc, Profession::Shaman, Profession::Soldier);

	elwan->IntroduceYourself();
	std::cout << std::endl;
	hakraldra->IntroduceYourself();
	std::cout << std::endl;
	mowkim->IntroduceYourself();

	return 0;
}

