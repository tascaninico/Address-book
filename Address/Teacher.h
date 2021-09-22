#pragma once
#include <list>
#include "Person.h"
#include "Student.h"

//класс для определения "Преподавателей"
class Teacher: public Person
{
private:
	//предмет для ведения
	string subject;
	//степень
	string post;
	//список студентов
	list<Student> students;
public:
	//конструктор по умолчанию
	Teacher();
	//конструктор с передачей аргументов
	Teacher(string firstName_new, string lastName_new, string phone_new, string address_new,
		string subject_new, string post_new);
	//добавление студента
	void addStudent(Student student);
	//получение всей информации
	string getAll() override;
};
