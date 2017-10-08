#pragma once

#include "NPC.h"
#include <iostream>
#include <string>

class Orc : public NPC{
public:
	Orc(std::string _name);
	void IntroduceYourself() override;
private:
	std::string name;
};