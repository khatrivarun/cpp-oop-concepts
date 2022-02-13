#pragma once
#include "EmployeeClass.h"
class DeveloperClass :
	public EmployeeClass
{

private:
	string favouriteLanguage;

public:
	DeveloperClass(string name, string company, int age, string favouriteLanguage);

	string getFavouriteLanguage();

	void setFavouriteLanguage(string favouriteLanguage);

	string toString();

};

