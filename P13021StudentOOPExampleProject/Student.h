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
	Student();
	Student(string n, int a, double m, char s, bool al);
	~Student();

	string getName();
	void setName(string n);
	int getAge();
	void setAge(int a);
	double getMark();
	void setMark(double m);
	char getSex();
	void setSex(char s);
	bool isAlive();
	void setAlive(bool al);

	string getInfo();

};