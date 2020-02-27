#include "employee.h"

#ifndef OWNER
#define OWNER

class Owner : public Employee
{
public:
	Owner(string last, string first, int id);
	~Owner();
	double calculate_salary();
	void display(ostream &out);
};

// Owner constructor
Owner::Owner(string last, string first, int id)
	: Employee(last, first, id, 'O', 15000)
{}

// Owner destructor
Owner::~Owner()
{}

// Calculates salary for Owner objects
double Owner::calculate_salary()
{
	return (empSalary + (.6*monthProfit));
}

// Displays data for Owner objects
void Owner::display(ostream &out)
{
	Employee::display(out);
}

#endif
