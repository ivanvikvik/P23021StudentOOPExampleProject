#include "Leader.h"

Leader::Leader(){
	setName("no name");
	setAge(14);
	setMark(4);
	setAlive(true);
	phoneNumber = "no number";
	e_mail = "no e-mail";
}

Leader::Leader(string name, int age, double mark, char sex, bool alive,
	string phoneNumber, string e_mail){
	setName(name);
	setAge(age);
	setMark(mark);
	this->phoneNumber = phoneNumber;
	this->e_mail = e_mail;
}

Leader::~Leader(){}

string Leader::getPhoneNumber(){
	return phoneNumber;
}

void Leader::setPhoneNumber(string phoneNumber){
	this->phoneNumber = phoneNumber;
}

string Leader::getEmail(){
	return e_mail;
}

void Leader::setEmail(string e_mail){
	this->e_mail = e_mail;
}

string Leader::getInfo() {
	return getName() + ": age = " + to_string(getAge())
		+ "; mark = " + to_string(getMark())
		+ "; alive = " + (isAlive() ? "yes" : "no")
		+ "; phoneNumber = " + phoneNumber
		+ "; e-mail = " + e_mail;
}