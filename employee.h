#include <iostream>
using namespace std;

#ifndef EMPLOYEE
#define EMPLOYEE

class Employee
{
public:
	Employee(string last, string first, int id, char type, double salary);
	~Employee();
	virtual double calculate_salary();
	virtual void display(ostream &out);
	void setProfit(double profit);
private:
	string empLast, empFirst;
	int empID;
	char empClass;
protected:
	double empSalary;
	double monthProfit;
};

// Employee constructor
Employee::Employee(string last, string first, int id, char type, double salary)
	: empLast(last), empFirst(first), empID(id), empClass(type), empSalary(salary)
{}

// Employee destructor
Employee::~Employee()
{}

// Calculates salary for Employee objects
double Employee::calculate_salary()
{
	return empSalary;
}

// Displays information for Employee objects
void Employee::display(ostream &out)
{
	out << "Name: " << empLast << " , " << empFirst << " " << endl
		<< "ID: " << empID << endl
		<< "Class: " << empClass << endl << "Salary: " << calculate_salary() << endl;
}

// Sets the profit for Employee objects
void Employee::setProfit(double profit)
{
	monthProfit = profit;
}
#endif
