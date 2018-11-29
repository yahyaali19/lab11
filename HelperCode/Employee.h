#pragma once
#include <string>
using namespace std;

class Employee
{
public:
	Employee(const string &, const string &, const string &);
	void setFirstName(const string &);
	string getFirstName();

	void setLastName(const string &);
	string getLasttName();

	void setSSN(const string &);
	string getSSN();

	// Pure virtual function makes Employee an Abstract Class
	virtual double earnings() const = 0; //pure virtual
	virtual void print() const; // virtual

private:
	string firstName;
	string lastName;
	string SSN; // Social Security Number 
}; // end Class Employee