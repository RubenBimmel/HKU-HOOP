#include "Lesson.h"

//constructor
Lesson::Lesson(tm _time, Subject _subject)
	: time (_time),
	  subject (_subject)
{}

//copy constructor
Lesson::Lesson(const Lesson &other) {
	time = other.time;
	subject = other.subject;
}

//assigment opperator
Lesson &Lesson::operator=(const Lesson &other) {
	time = other.time;
	subject = other.subject;
	return *this;
}

//destructor
Lesson::~Lesson() {
}