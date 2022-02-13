#include <iostream>
#include "EmployeeClass.h"
#include "DeveloperClass.h"

using namespace std;

int main()
{
	EmployeeClass employeeOne = EmployeeClass();
	EmployeeClass employeeTwo = EmployeeClass("Jack", "ABC", 25);

	DeveloperClass developer = DeveloperClass("Joe", "ABC", 25, "Java");

	cout << employeeOne.toString() << endl;
	cout << employeeTwo.toString() << endl;
	cout << developer.toString() << endl;

}