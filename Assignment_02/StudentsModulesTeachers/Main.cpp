#include <iostream>
#include <string>
#include <vector>

#include "stdafx.h"

#include "Module.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

void addTeachers(vector<Teacher*> &teachers);
void addStudents(vector<Student*> &students);
void addModules(vector<Module*> &modules);

//
//main
int main() {
	//Create modules, students and teachers on the heap.
	vector<Module*> modules;
	addModules(modules);
	
	vector<Student*> students;
	addStudents(students);

	vector<Teacher*> teachers;
	addTeachers(teachers);

	//Assign teachers to modules.
	for (int i = 0; i < 3; i++) {
		modules[i]->assignTeacher(teachers[i]);
	}

	//Assign students to 1-3 different modules
	students[0]->addModule(modules[0]);
	students[0]->addModule(modules[2]);
	students[1]->addModule(modules[1]);
	students[1]->addModule(modules[2]);
	students[2]->addModule(modules[1]);
	students[3]->addModule(modules[0]);
	students[3]->addModule(modules[1]);
	students[4]->addModule(modules[0]);
	students[4]->addModule(modules[2]);
	students[5]->addModule(modules[2]);
	students[6]->addModule(modules[0]);
	students[7]->addModule(modules[0]);
	students[7]->addModule(modules[1]);
	students[7]->addModule(modules[2]);
	students[8]->addModule(modules[0]);
	students[8]->addModule(modules[2]);
	students[9]->addModule(modules[0]);
	students[9]->addModule(modules[1]);
	students[9]->addModule(modules[2]);

	//Print a list of all modules with teacher
	cout << "List of all modules with teachers: \n";
	for each (Module* module in modules) {
		cout << module->getInformation() << "\n";
	}

	cout << "\n";

	//Print ECs for each student
	cout << "List of all student ECs: \n";
	for each (Student* student in students) {
		cout << student->getInformation() << "\n";
	}

	cout << "\n";

	//Set new EC for module
	modules[1]->setEC(8);

	//Print ECs for each student
	cout << "List of all student ECs: \n";
	for each (Student* student in students) {
		cout << student->getInformation() << "\n";
	}

	cout << "\n";

	//Remove student from module
	students[0]->removeModule(modules[2]);

	//Print ECs for each student
	cout << "List of all student ECs: \n";
	for each (Student* student in students) {
		cout << student->getInformation() << "\n";
	}

	return 0;
}


//
//Gets called once in main. Creates three teachers:
void addTeachers(vector<Teacher*> &teachers) {
	vector<string> teacherNames = { "Frank", "Edwin", "Esther" };

	vector<string>::iterator i = teacherNames.begin();
	while (i != teacherNames.end()) {
		Teacher* newTeacher = new Teacher(*i);
		teachers.push_back(newTeacher);
		i++;
	}
}

//
//Gets called once in main. Creates ten students:
void addStudents(vector<Student*> &students) {
	vector<string> studentNames = { "Daan", "Jesse", "Anna", "Emma", "Lars", "Fleur", "Lisa", "Milan", "Thijs", "Lotte" };
	
	vector<string>::iterator i = studentNames.begin();
	while (i != studentNames.end()) {
		Student* newStudent = new Student(*i);
		students.push_back(newStudent);
		i++;
	}
}

//
//Gets called once in main. Creates three modules:
void addModules(vector<Module*> &modules) {
	Module* maths = new Module("Maths", 5);
	modules.push_back(maths);

	Module* heobp = new Module("Heavy Object-Oriented Programming", 3);
	modules.push_back(heobp);

	Module* gameDes = new Module("Game Design", 4);
	modules.push_back(gameDes);
}