#include "Dwarve.h"

Dwarve::Dwarve(std::string _name) : name(_name) {}

void Dwarve::IntroduceYourself() {
	std::cout << "Hello there tall one, my name is " << name << " and I am a well known dwarve." << std::endl;
}