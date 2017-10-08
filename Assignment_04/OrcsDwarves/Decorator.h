#pragma once

#include "NPC.h"
#include <iostream>

class Decorator : public NPC {
public:
	Decorator(NPC* newNPC);
	void IntroduceYourself();
protected:
	NPC* npc;
};