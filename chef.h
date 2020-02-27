#include "employee.h"

#ifndef CHEF
#define CHEF

class Chef : public Employee
{
public:
	Chef(string last, string first, int id, string foodType);
	~Chef();
	double calculate_salary();
	void display(ostream &out);
private: 
	string cuisine;
};

// Chef constructor
Chef::Chef(string last, string first, int id, string foodType)
	: Employee(last, first, id, 'C', 10000), cuisine(foodType)
{}

// Chef destructor
Chef::~Chef()
{}

// Calculates salary for Chef objects
double Chef::calculate_salary()
{
	return (empSalary + (.2*monthProfit));
}

// Displays data for Chef objects
void Chef::display(ostream &out)
{
	Employee::display(out);
	out << "Cuisine: " << cuisine << endl;
}
#endif
