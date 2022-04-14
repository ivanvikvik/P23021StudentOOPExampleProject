#pragma once
#include "Student.h"
#include "Header.h"


// entity-class
class Group
{
	friend class Manager;

private:
	string name;
	int size;
	Student* list;

public:
	Group();
	Group(string name);
	Group(string name, Student* list, int size);
	~Group();

	void add(Student student);
	Student get(int index);
	int getSize();
	string getName();
	void setName(string name);

	string getInfo();
};

// entity-class
class Student {
	friend void changeMark(Student& st);
	friend void Group::add(Student student);

private:
	static int count;

	string name;
	int age;
	double mark;
	char sex;
	bool alive;

public:
	static const int MAX_STUDENT_AGE = 80;
	static const int MIN_STUDENT_AGE = 14;

	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;

	Student();
	Student(string name, int age, double mark, char sex, bool alive);
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

	static int getCount();

	string getInfo();

};