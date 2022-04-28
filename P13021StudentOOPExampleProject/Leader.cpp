#include "Leader.h"

Leader::Leader(){
	name = "no name";
	age = 14;
	mark = 4;
	alive = true;
	phoneNumber = "no number";
	e_mail = "no e-mail";
}

Leader::Leader(string name, int age, double mark, char sex, bool alive,
	string phoneNumber, string e_mail){
	this->name = name;
	this->age = age;
	this->mark = mark;
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
	return name + ": age = " + to_string(age)
		+ "; mark = " + to_string(mark)
		+ "; alive = " + (alive ? "yes" : "no")
		+ "; phoneNumber = " + phoneNumber
		+ "; e-mail = " + e_mail;
}