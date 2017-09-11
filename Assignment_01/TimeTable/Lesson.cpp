#include "Lesson.h"

//constructor
Lesson::Lesson(tm _time, Subject _subject, Teacher _teacher)
	: time (_time),
	  subject (_subject),
	  teacher (_teacher)
{}

//copy constructor
Lesson::Lesson(const Lesson &other) {
	time = other.time;
	subject = other.subject;
	teacher = other.teacher;
}

//assigment opperator
Lesson &Lesson::operator=(const Lesson &other) {
	time = other.time;
	subject = other.subject;
	teacher = other.teacher;
	return *this;
}

//destructor
Lesson::~Lesson() {
}