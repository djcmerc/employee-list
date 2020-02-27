#include <iostream>
#include <string>
using namespace std;

#include "employee.h"
#include "owner.h"
#include "chef.h"
#include "waiter.h"

int main()
{
	Employee *emp[6];
	string last, first, cuisine;
	int id, serviceYears;
	double profit, tips;

	cout << "Employee Database" << endl << endl;

	// Prompts the user to enter the information for the owner, chefs, and waiters
	for (int i = 0; i < 6; i++)
	{
		if (i == 0)
		{
			cout << "Enter the information for the owner." << endl;
			cout << "Last name: ";
			cin >> last;
			cout << "First name: ";
			cin >> first;
			cout << "Employee id number: ";
			cin >> id;
			emp[i] = new Owner(last, first, id);
		}
		else if (i == 1 || i == 2)
		{
			cout << endl << "Enter the information for chef " << i << "." << endl;
			cout << "Last name: ";
			cin >> last;
			cout << "First name: ";
			cin >> first;
			cout << "Employee id number: ";
			cin >> id;
			cout << "Cuisine of expertise: ";
			cin >> cuisine;
			emp[i] = new Chef(last, first, id, cuisine);
		}
		else
		{
			cout << endl << "Enter the information for waiter " << (i - 2) << endl;
			cout << "Last name: ";
			cin >> last;
			cout << "First name: ";
			cin >> first;
			cout << "Employee id number: ";
			cin >> id;
			do
			{
				cout << "Service years: ";
				cin >> serviceYears;
				// Checks for negative input for service years
				if (serviceYears < 0)
					cout << "Please enter a valid number for the number of service years." << endl;
			} while (serviceYears < 0);
			do
			{
				cout << "Amount in tips received: ";
				cin >> tips;
				// Checks for negative input for tips
				if (tips < 0)
					cout << "Please enter a valid number for the amount of tips received." << endl;
			} while (tips < 0);
			emp[i] = new Waiter(last, first, id, serviceYears, tips);
		}
	}

	do
	{
		cout << endl << "Enter the profit for the month: ";
		cin >> profit;
		// Checks for negative input for profit
		if (profit < 0)
			cout << "Please enter a valid number for the profit earned this month." << endl;
	} while (profit < 0);
	cout << endl << "Employee information: " << endl << endl;

	for (int i = 0; i < 6; i++)
	{
		emp[i]->setProfit(profit);
		emp[i]->display(cout);
		cout << endl;
	}

	return 0;
}
