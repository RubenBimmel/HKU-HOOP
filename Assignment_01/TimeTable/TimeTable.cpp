#pragma once

#include "TimeTable.h"

//Gets called to open this TimeTable
void TimeTable::load() {
	currentWeek();
}

//Switches the SchoolClass
void TimeTable::selectClass() {
	//currentDisplayedSchoolClass = ...
}

//Gets called when new content needs to be displayed on the timetable
void TimeTable::displayWeek(int &week) {
	weeks[week].display;
}

//Go to current week
void TimeTable::currentWeek() {
	//currentDisplayedWeek = do some calculations to get the current week number ...

	displayWeek(currentDisplayedWeek);
}

//Go to next week
void TimeTable::nextWeek() {
	if (currentDisplayedWeek < 52)
	{
		displayWeek(currentDisplayedWeek++);
	}
}

//Go to previous week
void TimeTable::previousWeek() {
	if (currentDisplayedWeek >= 0)
	{
		displayWeek(currentDisplayedWeek--);
	}
}