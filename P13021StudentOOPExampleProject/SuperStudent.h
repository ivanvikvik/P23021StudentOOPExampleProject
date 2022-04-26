#pragma once
#include "Student.h"

class SuperStudent
{
private:
	static int count;

	string name;
	int age;
	double mark;
	char sex;
	bool alive;

	string subject;
	string ability;

public:
	static const int MAX_STUDENT_AGE = 80;
	static const int MIN_STUDENT_AGE = 14;

	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;

	SuperStudent();
	SuperStudent(string name, int age, double mark, char sex, bool alive,
		string subject, string ability);
	~SuperStudent();

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

	string getSubject();
	void setSubject(string subject);
	string getAbility();
	void setAbility(string ability);

	static int getCount();

	string getInfo();

};

