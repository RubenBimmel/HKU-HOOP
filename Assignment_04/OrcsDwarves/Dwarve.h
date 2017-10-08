#pragma once

#include "NPC.h"
#include <iostream>
#include <string>

class Dwarve : public NPC {
public:
	Dwarve(std::string _name);
	void IntroduceYourself() override;
private:
	std::string name;
};