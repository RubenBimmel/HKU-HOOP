#pragma once

#include "CalendarWeek.h"
#include "SchoolClass.h"

class TimeTable {
private:
	int currentDisplayedWeek;
	CalendarWeek weeks[52];

	SchoolClass currentDisplayedSchoolClass;

public:
	void load();

	void selectClass();

	void displayWeek(int &week);
	void currentWeek();
	void nextWeek();
	void previousWeek();
};