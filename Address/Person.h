#pragma once
#include <string>
#include <iostream>

using namespace std;

//абстрактный класс-родитель
class Person
{
private:
	//имя
	string firstName;
	//фамилия
	string lastName;
	//телефон
	string phone;
	//адрес
	string address;
public:
	//конструктор по умолчанию
	Person();
	//конструктор с передачей аргументов
	Person(string firstName_new, string lastName_new, string phone_new, string address_new);
	//метод для последующего переопределения
	virtual string getAll();
	//метод для получения телефона и фио
	string getPhoneAndFIO();
	//метод для установления имени
	void setFirstName(string firstName_new);
	//метод для получения имени
	string getFirstName();
	//метод для установления фамилии
	void setLastName(string lastName_new);
	//метод для получения фамилии
	string getLastName();
	//метод для установления номера телефона
	void setPhone(string phone_new);
	//метод для получения номера телефона
	string getPhone();
	//метод для установления адреса
	void setAddress(string address_new);
	//метод для получения адреса
	string getAddress();
};

