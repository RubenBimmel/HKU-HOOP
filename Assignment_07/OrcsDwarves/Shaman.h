#pragma once

#include "Decorator.h"
#include <iostream>

class Shaman : public Decorator {
public:
	Shaman(NPC* newNPC) : Decorator(newNPC) {};
	void IntroduceYourself();
};