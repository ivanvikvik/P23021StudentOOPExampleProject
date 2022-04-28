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