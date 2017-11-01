#pragma once

#include <string>
#include <vector>

enum class Race {Orc, Dwarve};
enum class Profession {Farmer, Soldier, Shaman, None};

class NPC {
public:
	virtual void IntroduceYourself() = 0;
	static NPC* createNPC(std::string name, Race race, Profession professions, Profession secondaryProfession);
	static NPC* createNPC(std::string name, Race race, Profession professions);
	static NPC* createNPC(std::string name, Race race);
	NPC* NPC::addProfession(Profession profession);
};