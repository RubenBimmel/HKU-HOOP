#include "Orc.h"

Orc::Orc(std::string _name) : name(_name) {}

void Orc::IntroduceYourself() {
	std::cout << "Prepare yourself, for I am " << name << ", strongest of all Orcs." << std::endl;
}