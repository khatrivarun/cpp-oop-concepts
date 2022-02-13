#include "EmployeeClass.h"
#include "BaseClass.h"
#include <iostream>
#include <string>

using namespace std;


EmployeeClass::EmployeeClass() {
	this->name = "name";
	this->company = "company";
	this->age = 0;
}

EmployeeClass::EmployeeClass(string name, string company, int age) {
	this->name = name;
	this->company = company;
	this->age = age;
}

string EmployeeClass::getName() {
	return this->name;
}

string EmployeeClass::getCompany() {
	return this->company;
}

int EmployeeClass::getAge() {
	return this->age;
}

void EmployeeClass::setName(string name) {
	this->name = name;
}

void EmployeeClass::setCompany(string company) {
	this->company = company;
}

void EmployeeClass::setAge(int age) {
	this->age = age;
}

string EmployeeClass::toString() {

	return "Employee { name: " + name +
		" company: " + company +
		" age: " + to_string(age) +
		" }";

};