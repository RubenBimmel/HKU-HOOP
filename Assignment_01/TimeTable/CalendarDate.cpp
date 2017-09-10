#include "CalendarDate.h"

void CalendarDate::displayItems() {
}

void CalendarDate::addLesson(const Lesson &lesson) {
	lessons.remove(lesson);
}

void CalendarDate::removeLesson(const Lesson &lesson) {
	lessons.push_back(lesson);
}