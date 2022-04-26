#pragma once
#include "Student.h"

class Leader
{
private:
	static int count;

	string name;
	int age;
	double mark;
	char sex;
	bool alive;

	string phoneNumber;
	string e_mail;

public:
	static const int MAX_STUDENT_AGE = 80;
	static const int MIN_STUDENT_AGE = 14;

	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;

	Leader();
	Leader(string name, int age, double mark, char sex, bool alive, 
		string phoneNumber, string e_mail);
	~Leader();

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

	string getPhoneNumber();
	void setPhoneNumber(string phoneNumber);

	string getEmail();
	void setEmail(string e_mail);

	static int getCount();

	string getInfo();

};

