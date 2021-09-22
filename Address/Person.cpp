#include "Person.h"

//Реализация методов класса Person
Person::Person() {};

Person::Person(string firstName_new, string lastName_new, string phone_new, string address_new) {
	firstName = firstName_new;
	lastName = lastName_new;
	phone = phone_new;
	address = address_new;
}

void Person::setAddress(string address_new) {
	address = address_new;
}

string Person::getAddress() {
	return address;
}

void Person::setFirstName(string firstName_new) {
	firstName = firstName_new;
}

string Person::getFirstName() {
	return firstName;
}

void Person::setLastName(string lastName_new) {
	lastName = lastName_new;
}

string Person::getLastName() {
	return lastName;
}

void Person::setPhone(string phone_new) {
	phone = phone_new;
}

string Person::getPhone() {
	return phone;
}

string Person::getPhoneAndFIO() {
	return phone + " " + firstName + " " + lastName;
}

string Person::getAll(){
	return "";
}