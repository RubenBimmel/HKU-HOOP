#pragma once

#include "CalendarDate.h"

class CalendarWeek {
private:
	CalendarDate days[7];

public:
	void display();
};