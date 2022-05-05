#include "SuperStudent.h"

SuperStudent::SuperStudent() : Student() {
	//cout << "Call Leader default constructor..." << endl;	
	subject = "no subject";
	ability = "no ability";
}

SuperStudent::SuperStudent(string name, int age, double mark, char sex, bool alive,
	string subject, string ability) : Student(name, age, mark, sex, alive) {

	this->subject = subject;
	this->ability = ability;
}

SuperStudent::~SuperStudent() {
	//cout << "Call Leader destructor..." << endl;
}

string SuperStudent::getInfo() {
	return Student::getInfo()
		+ "; subject = " + subject
		+ "; ability = " + ability;
}