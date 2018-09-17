// AirlineReservationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Airline.h"

using namespace AirlineReservationSystem;
using namespace std;

int displayMenu();

int main()
{
//Database passengerDB;

while (true) 
	{
	int selection = displayMenu();
	switch (selection) {
	case 0: //EXIT
		return 0;
	case 1:
		//BOOK A FLIGHT
		break;
	case 2:
		//VIEW BOOKING INFORMATION
		break;
	case 3:
		//VIEW FLIGHT SCHEDULE
		break;
	case 4:
		//VIEW AND PRINT TICKET
		break;
	case 5:
		//VIEW FLIGHT DETAILS
		break;
	default:
		cerr << "Unknown command." << endl;
		break;
	}
}

return 0;
}


int displayMenu()
{
	int selection;
	
		cout << endl;
		cout << "Airline Reservation System" << endl;
		cout << "___________________________" << endl;
		cout << "1. Book A Flight" << endl;
		cout << "2. View Booking Information" << endl;
		cout << "3. View Flight Schedule" << endl;
		cout << "4. View and Print Ticket" << endl;
		cout << "5. View Flight Details" << endl;
		cout << "0. Exit" << endl;
		cout << "____________________________" << endl;
		cin >> selection;

		return selection;
	
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
