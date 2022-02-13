#include "DeveloperClass.h"
#include "EmployeeClass.h"

DeveloperClass::DeveloperClass(string name, string company, int age, string favouriteLanguage)
	: EmployeeClass(name, company, age) {

	this->favouriteLanguage = favouriteLanguage;

}

string DeveloperClass::getFavouriteLanguage() {
	return this->favouriteLanguage;
}

void DeveloperClass::setFavouriteLanguage(string favouriteLanguage) {
	this->favouriteLanguage = favouriteLanguage;
}

string DeveloperClass::toString() {
	return "Developer { name: " +
		this->getName() +
		" company: " +
		this->getCompany() +
		" age: " +
		to_string(this->getAge()) +
		" favouriteLanguage: " +
		this->favouriteLanguage +
		" }";
}
