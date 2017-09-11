#pragma once

#include "time.h"
#include "Subject.h"
#include "Teacher.h"

class Lesson {
private:
	tm time;
	Subject subject;
	Teacher teacher;
	
public:
	Lesson(tm _time, Subject _subject, Teacher _teacher);
	Lesson(const Lesson &other);
	Lesson &Lesson::operator=(const Lesson &other);
	~Lesson();
};