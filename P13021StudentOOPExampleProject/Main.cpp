#include "Student.h"

int main() {
	Student st1("Alex", 15, 10, 'm', true);
	Student st2;

	cout << st1.getInfo() << endl;
	cout << st2.getInfo() << endl;

	return 0;
}