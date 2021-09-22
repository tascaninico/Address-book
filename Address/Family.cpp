#include "Family.h"

//Реализация методов класса Family
Family::Family(string firstName_new, string lastName_new, string phone_new, string address_new, 
	string type_new) {
	setFirstName(firstName_new);
	setLastName(lastName_new);
	setPhone(phone_new);
	setAddress(address_new);
	type = type_new;
}

string Family::getAll() {
	return getPhoneAndFIO() + " " + getAddress() + " " + type + "\n";
}
