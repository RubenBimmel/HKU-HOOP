#include "Mage.h"

void Mage::IntroduceYourself() {
	npc->IntroduceYourself();
	std::cout << "As a skilled mage, my wand can destroy you from miles away." << std::endl;
}