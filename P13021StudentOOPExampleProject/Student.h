#pragma once
#include "Header.h"

class Student {
private:
	string name;
	int age;
	double mark;
	char sex;
	bool alive;
public:
	Student() {
		name = "no name";
		age = 14;
		mark = 4;
		sex = 'm';
		alive = true;
	}

	Student(string n, int a, double m, char s, bool al) {
		name = n;
		age = a;
		mark = m;
		sex = s;
		alive = al;
	}
	~Student() {

	}

	string getName() {
		return name;
	}

	void setName(string n) {
		name = n;
	}

	int getAge() {
		return age;
	}

	void setAge(int a) {
		if (a >= 14 && a <= 70) {
			age = a;
		}
	}

	double getMark() {
		return mark;
	}

	void setMark(double m) {
		if (m >= 0 && m <= 10) {
			mark = m;
		}
	}

	char getSex() {
		return sex;
	}

	void setSex(char s) {
		if (s == 'm' || s == 'f') {
			sex = s;
		}
	}

	bool isAlive() {
		return alive;
	}

	void setAlive(bool al) {
		alive = al;
	}

	string getInfo() {
		return name + ": age = " + to_string(age)
			+ "; mark = " + to_string(mark)
			+ "; alive = " + (alive ? "yes" : "no");
	}

};