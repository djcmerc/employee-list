#include "employee.h"

#ifndef WAITER
#define WAITER

class Waiter : public Employee
{
public: 
	Waiter(string last, string first, int id, int years, double tips);
	~Waiter();
	double calculate_salary();
	void display(ostream &out);
private: 
	int serviceYears;
	double tips;
};

// Waiter constructor
Waiter::Waiter(string last, string first, int id, int years, double tips)
	: Employee(last, first, id, 'W', 3000), serviceYears(years), tips(tips)
{}

// Waiter destructor
Waiter::~Waiter()
{}

// Calculates salary for Waiter objects
double Waiter::calculate_salary()
{
	return (empSalary + tips);
}

// Displays data for Waiter objects
void Waiter::display(ostream &out)
{
	Employee::display(out);
	out << "Years of Service: " << serviceYears << endl;
}
#endif
