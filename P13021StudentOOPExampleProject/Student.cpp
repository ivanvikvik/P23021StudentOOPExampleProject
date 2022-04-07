#include "Student.h"

Student::Student() {
	name = "no name";
	age = 14;
	mark = 4;
	sex = 'm';
	alive = true;
}

Student::Student(string name, int age, double mark, char sex, bool alive) {
	this->name = name;
	this->age = age;
	this->mark = mark;
	this->sex = sex;
	this->alive = alive;
}
Student::~Student() {

}

string Student::getName() {
	return name;
}

void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age >= 14 && age <= 70) {
		this->age = age;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double mark) {
	if (mark >= 0 && mark <= 10) {
		this->mark = mark;
	}
}

char Student::getSex() {
	return sex;
}

void Student::setSex(char sex) {
	if (sex == 'm' || sex == 'f') {
		this->sex = sex;
	}
}

bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool alive) {
	this->alive = alive;
}

string Student::getInfo() {
	return name + ": age = " + to_string(age)
		+ "; mark = " + to_string(mark)
		+ "; alive = " + (alive ? "yes" : "no");
}