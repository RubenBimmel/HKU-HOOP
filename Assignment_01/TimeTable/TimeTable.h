#pragma once

#include "CalendarWeek.h"

class TimeTable {
private:
	int currentDisplayedWeek;
	CalendarWeek weeks[52];

public:
	void addClass();
	void addLesson();
	void displayWeek(int week);
	void currentWeek();
	void nextWeek();
	void previousWeek();
};