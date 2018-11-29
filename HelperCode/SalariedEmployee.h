#pragma once
#include "Employee.h"
class SalariedEmployee : public Employee
{
public:
	SalariedEmployee(const string &, const string &, const string &, double = 0.0);
	void setWeeklySalary(double); // set weekly salary
	double getWeeklySalary() const;

	virtual double earnings() const;
	virtual void print() const;

private:
	double weeklySalary;
};