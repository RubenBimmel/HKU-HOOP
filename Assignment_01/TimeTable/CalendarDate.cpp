#include "CalendarDate.h"

//Gets called when new content needs to be displayed on the timetable
void CalendarDate::displayItems() {
	//Display all Lessons on the Time Table
}

//Adds a new lesson to this day
void CalendarDate::addLesson(const Lesson &lesson) {
	Lesson newLesson;
	
	//Create new lesson...
	
	lessons.push_back(newLesson);
}

//removes a new lesson from this day
void CalendarDate::removeLesson(const Lesson &lesson) {
	lessons.remove(lesson);
}