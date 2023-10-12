// This file is contains our main() routine which determines where our 
// program execution begins and ends.
#include <iostream>
#include "MainMenu.h"

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

// Set up a pointer for tracking a linked list of Employees
// Display a menu allowing a user various choices, and process those choices
// Clean up any dynamically allocated memory before finishing
int main()
{	

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	

	/*Employee* emp1 = createEmployee("Tony");

	std::cout << "Employee 1: " << emp1->id << " Name: " << emp1->name << std::endl;*/


	// a pointer to our linked list of employees.
	Employee* pEmployees = nullptr;

	bool exitMainMenu{ false };		// init to default value
	Command command{ Command::invalid };

	// display the main menu, allow the user to make choices, and handle the input
	do {
		displayMainMenu();
		command = getMenuCommand();
		handleMenuInput(pEmployees, command);
	} while (command != Command::exit);

	// cleanup! - deallocate any employees in our linked list before setting the list to nullptr;
	// TODO

	return 0;



}
