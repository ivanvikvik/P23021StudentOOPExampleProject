#pragma once
#include "Student.h"

class SuperStudent : public Student
{
private:
	string subject;
	string ability;

public:
	SuperStudent();
	SuperStudent(string name, int age, double mark, char sex, bool alive,
		string subject, string ability);
	~SuperStudent();

	/*string getSubject();
	void setSubject(string subject);
	
	string getAbility();
	void setAbility(string ability);*/

	string getInfo();
};

