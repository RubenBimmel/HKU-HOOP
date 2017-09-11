#pragma once

#include "CalendarDate.h"
#include "SchoolClass.h"

class CalendarWeek {
private:
	CalendarDate days[7];

public:
	void display(SchoolClass &schoolClass);
};