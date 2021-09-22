#pragma once
#include <list>
#include "Person.h"

//класс дл€ определени€ "—тудента"
class Student: public Person
{
private:
	//номер группы
	string group;
	//факультет
	string faculty;
public:
	//конструктор по умолчанию
	Student();
	//конструктор с передачей переменных
	Student(string firstName_new, string lastName_new, string phone_new, string address_new,
		string group_new, string faculty_new);
	//получение всей информации
	string getAll() override;
};

