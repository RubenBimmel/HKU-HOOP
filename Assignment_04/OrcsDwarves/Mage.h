#pragma once

#include "Decorator.h"
#include <iostream>

class Mage : public Decorator {
public:
	Mage(NPC* newNPC) : Decorator(newNPC) {};
	void IntroduceYourself();
};