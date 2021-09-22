#pragma once
#include "Person.h"

//класс дл€ определени€ "„ленов семьи"
class Family: public Person
{
private:
	//"тип" члена семьи (брат, сестра и т.д.)
	string type;
public:
	//конструктор
	Family(string firstName_new, string lastName_new, string phone_new, string address_new, string type_new);
	//получение всей информации
	string getAll() override;
};

