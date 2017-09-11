#pragma once

#include <iostream>
#include <list>

#include "Lesson.h"

using namespace std;

class CalendarDate {
private:
	list <Lesson> lessons;

public:
	void displayItems();
	void addLesson(const Lesson &lesson);
	void removeLesson(const Lesson &lesson);
};