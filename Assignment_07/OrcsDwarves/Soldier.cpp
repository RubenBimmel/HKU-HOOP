#include "Soldier.h"

//Soldier::Soldier(NPC* newNPC) : Decorator{}

void Soldier::IntroduceYourself() {
	npc->IntroduceYourself();
	std::cout << "As a soldier I have encountered enemies much stronger than you." << std::endl;
}