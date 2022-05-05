#include "Group.h"
#include "Leader.h"
#include "SuperStudent.h"


//!!!
void calculateAvgMark(Student** list, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << list[i]->getInfo() << endl;
	}
}

void changeMark(Student& st) {
	srand(time(0));
	int mark = rand() % 7 + 4;
	st.mark = mark;
}



int main() {
	Student** student = new Student * [6];

	student[0] = new Student("Kate", 15, 2.4, 'f', true);
	student[1] = new Student("Alex", 15, 2.4, 'm', true);
	student[2] = new Leader("Peter", 14, 10, 'm', true, "+375456789054", "peter@tut.by");
	student[3] = new Student("Anna", 15, 2.4, 'm', true);
	student[4] = new Student("Anton", 15, 2.4, 'f', true);
	student[5] = new SuperStudent("Ilya", 15, 4, 'm', false, "Math", "Flyable");
	
	calculateAvgMark(student, 6);

	//Leader *leader = new Leader();

	//cout << leader1.getInfo() << endl;

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