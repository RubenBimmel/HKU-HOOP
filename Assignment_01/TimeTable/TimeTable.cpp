#include "TimeTable.h"

void TimeTable::addClass() {

}

void TimeTable::addLesson() {

}

void TimeTable::displayWeek(int &week) {
	weeks[week].display;
}

void TimeTable::currentWeek() {
	//currentDisplayedWeek = do some calculations to get the current week number

	displayWeek(currentDisplayedWeek);
}

void TimeTable::nextWeek() {
	displayWeek(++currentDisplayedWeek);
}

void TimeTable::previousWeek() {
	displayWeek(--currentDisplayedWeek);
}