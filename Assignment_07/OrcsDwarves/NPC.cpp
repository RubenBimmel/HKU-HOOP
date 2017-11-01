#include "NPC.h"
#include "Dwarve.h"
#include "Orc.h"
#include "Soldier.h"
#include "Shaman.h"
#include "Farmer.h"

NPC* NPC::createNPC(std::string name, Race race, Profession profession, Profession secondaryProfession) {
	NPC* newNPC;

	switch (race)
	{
	case Race::Orc:
		newNPC = new Orc(name);
		break;
	case Race::Dwarve:
		newNPC = new Dwarve(name);
		break;
	default:
		return nullptr;
	}
	
	newNPC = (*newNPC).addProfession(profession);
	newNPC = (*newNPC).addProfession(secondaryProfession);

	return newNPC;
}

NPC* NPC::createNPC(std::string name, Race race, Profession profession) {
	return createNPC(name, race, profession, Profession::None);
}

NPC* NPC::createNPC(std::string name, Race race) {
	return createNPC(name, race, Profession::None, Profession::None);
}

NPC* NPC::addProfession(Profession profession) {
	NPC* newNPC = this;
	switch (profession)
	{
	case Profession::Farmer:
		newNPC = new Farmer(newNPC);
		break;
	case Profession::Soldier:
		newNPC = new Soldier(newNPC);
		break;
	case Profession::Shaman:
		newNPC = new Shaman(newNPC);
		break;
	default:
		break;
	}

	return newNPC;
}