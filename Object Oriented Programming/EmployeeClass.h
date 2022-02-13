#pragma once
#include "BaseClass.h"
class EmployeeClass :
	public BaseClass
{
public:
	EmployeeClass();

	EmployeeClass(string name, string company, int age);

	string getName();

	string getCompany();

	int getAge();

	void setName(string name);

	void setCompany(string company);

	void setAge(int age);

	string toString();

private:
	string name;
	string company;
	int age;
};

