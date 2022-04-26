#include "Group.h"
#include "Leader.h"


void changeMark(Student& st) {
	srand(time(0));
	int mark = rand() % 7 + 4;
	st.mark = mark;
}

int main() {
	Leader leader1;
	leader1.
	//Group group1("10a");
	/*Group group2("10b");

	Student s1("Alex", 14, 9, 'm', true);

	cout << "Before: " << s1.getInfo() << endl;
	changeMark(s1);
	cout << "After: " << s1.getInfo() << endl;*/

	//Student s2("Ilya", 15, 4, 'm', false);
	//Student s3("Anna", 15, 8, 'f', true);
	//Student s4("Diana", 15, 10, 'f', true);
	//Student s5("Alexeya", 15, 6, 'f', false);
	//Student s6("Igor", 15, 9, 'm', true);	
	//Student s7("Peter", 14, 7, 'm', true);
	
	//cout << "Count of students right now: " << s1.getCount() << endl;
	//cout << "Count of students right now: " << s2.getCount() << endl;
	//cout << "Count of students right now: " << s3.getCount() << endl;

	/*group1.add(s1);
	group1.add(s2);
	group1.add(s3);
	group1.add(s4);

	group2.add(s5);
	group2.add(s6);
	group2.add(s7);

	cout << group1.getInfo() << "\n\n";

	cout << group2.getInfo() << endl;

	for (int i = 0; i < group1.getSize(); i++)
	{
		cout << group1.get(i).getInfo() << endl;
	}*/

	return 0;
}