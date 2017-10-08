#include "Decorator.h"

Decorator::Decorator(NPC* newNPC) : npc(newNPC) {}

void Decorator::IntroduceYourself() {
	npc->IntroduceYourself();
}