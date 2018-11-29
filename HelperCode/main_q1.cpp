#include "Employee.h"
#include "SalariedEmployee.h"

#include <iostream>
using namespace std;

void virtualViaPointer(const Employee * const);
void virtualViaReference(const Employee &);

int main()
{
	//Create Derived-class object
	SalariedEmployee salariedEmployee("John", "Smith", "111-111-111", 800);

	cout << "Employee processed individually using static binding" << endl;
	salariedEmployee.print();
	cout << "Salary Earned " << salariedEmployee.earnings();

	Employee *employee = &salariedEmployee;

	cout<< "Employee processed polymorphically via dynamic binding" << endl;
	// call virtualViaPointer to print each Employee's information
	// and earnings using dynamic binding
	cout << "Virtual function calls made off base-class pointers" << endl;
	virtualViaPointer(employee);

	// call virtualViaReference to print each Employee's information 
	// and earnings using dynamic binding
	cout << "Virtual function calls made off base-class references" << endl;
	virtualViaReference(*employee);



	system("pause");
	return 0;
}