#include "Student.h"

//Реализация методов класса Student
Student::Student(){}

Student::Student(string firstName_new, string lastName_new, string phone_new, string address_new,
	string group_new, string faculty_new) {
	setFirstName(firstName_new);
	setLastName(lastName_new);
	setPhone(phone_new);
	setAddress(address_new);
	group = group_new;
	faculty = faculty_new;
}

string Student::getAll() {
	return getPhoneAndFIO() + " " + getAddress() + " " + group + " " 
		+ faculty + "\n";
}
