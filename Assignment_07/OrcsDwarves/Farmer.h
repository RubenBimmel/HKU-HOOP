#pragma once

#include "Decorator.h"
#include <iostream>

class Farmer : public Decorator {
public:
	Farmer(NPC* newNPC) : Decorator(newNPC) {};
	void IntroduceYourself();
};