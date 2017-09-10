#pragma once

#include "time.h"
#include "Subject.h"

class Lesson {
private:
	tm time;
	Subject subject;
	
public:
	Lesson(tm _time, Subject _subject);
	Lesson(const Lesson &other);
	Lesson &Lesson::operator=(const Lesson &other);
	~Lesson();
};