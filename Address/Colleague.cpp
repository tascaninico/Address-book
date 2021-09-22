#include "Colleague.h"

//Реализация методов класса Colleague
Colleague::Colleague(string firstName_new, string lastName_new, string phone_new, string address_new,
	string placeWork_new, string post_new) {
	setFirstName(firstName_new);
	setLastName(lastName_new);
	setPhone(phone_new);
	setAddress(address_new);
	placeWork = placeWork_new;
	post = post_new;
}

string Colleague::getAll() {
	return getPhoneAndFIO() + " " + getAddress() + " " + placeWork + 
		" " + post + "\n";
}
