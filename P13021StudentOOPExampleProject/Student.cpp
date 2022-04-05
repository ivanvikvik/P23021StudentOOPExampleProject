#include "Student.h"

Student::Student() {
	name = "no name";
	age = 14;
	mark = 4;
	sex = 'm';
	alive = true;
}

Student::Student(string n, int a, double m, char s, bool al) {
	name = n;
	age = a;
	mark = m;
	sex = s;
	alive = al;
}
Student::~Student() {

}

string Student::getName() {
	return name;
}

void Student::setName(string n) {
	name = n;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int a) {
	if (a >= 14 && a <= 70) {
		age = a;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(double m) {
	if (m >= 0 && m <= 10) {
		mark = m;
	}
}

char Student::getSex() {
	return sex;
}

void Student::setSex(char s) {
	if (s == 'm' || s == 'f') {
		sex = s;
	}
}

bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool al) {
	alive = al;
}

string Student::getInfo() {
	return name + ": age = " + to_string(age)
		+ "; mark = " + to_string(mark)
		+ "; alive = " + (alive ? "yes" : "no");
}