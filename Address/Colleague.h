#pragma once
#include "Person.h"

//класс дл€ определении " оллег"
class Colleague: public Person
{
private:
	//место работы
	string placeWork;
	//должность
	string post;
public:
	//конструктор
	Colleague(string firstName_new, string lastName_new, string phone_new, string address_new, 
		string placeWork_new, string post_new);
	//получение всей информации
	string getAll() override;
};

