#pragma once

#include "Decorator.h"
#include <iostream>

class Soldier : public Decorator {
public:
	Soldier(NPC* newNPC) : Decorator(newNPC) {};
	void IntroduceYourself();
};