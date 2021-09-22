#include "Teacher.h"

//Реализация методов класса Teacher
Teacher::Teacher() {};

Teacher::Teacher(string firstName_new, string lastName_new, string phone_new, string address_new,
	string subject_new, string post_new) {
	setFirstName(firstName_new);
	setLastName(lastName_new);
	setPhone(phone_new);
	setAddress(address_new);
	subject = subject_new;
	post = post_new;
}

void Teacher::addStudent(Student student) {
	students.push_back(student);
}

string Teacher::getAll() {
	string all;
	all = getPhoneAndFIO() + " " + getAddress() + " " + subject + " " + post +
		"\nУченики:\n";
	for (Student n : students) {
		all += n.getAll();
	}
	all += "\n";
	return all;
}
