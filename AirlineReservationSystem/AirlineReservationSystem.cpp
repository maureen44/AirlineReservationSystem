// AirlineReservationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "AirlineDB.h"

using namespace AirlineReservationSystem;
using namespace std;

int displayMenu();
void doReserve(AirlineDB& db);
void doCancel(AirlineDB& db);
void displayAirline(AirlineDB& db);
void doReservedFirstClass(AirlineDB& db);
void doReservedEconomyClass(AirlineDB& db);

int main()
{
AirlineDB airlineReservationDB;

while (true) 
	{
	int selection = displayMenu();
	switch (selection) {
	case 0: //EXIT
		return 0;
	case 1:
		doReserve(airlineReservationDB);
		break;
	case 2:
		airlineReservationDB.displayAll();
		break;
	case 3:
		airlineReservationDB.displayAirlineSchedule();
		break;
	case 4:
		//VIEW AND PRINT TICKET
		break;
	case 5:
		//VIEW FLIGHT DETAILS
		break;
	case 6:
		airlineReservationDB.displayPassengerInfo();
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
		cout << "6. View Passenger Info" << endl;
		cout << "0. Exit" << endl;
		cout << "____________________________" << endl;
		cin >> selection;

		return selection;
	
}

void doReserve(AirlineDB& db) {
	string firstName;
	string lastName;
	string dateOfBirth;
	string passportNo;
	string gender;
	string nationality;

	displayAirline(db);
	
	cout << "First name? ";
	cin >> firstName;
	cout << "Last name? ";
	cin >> lastName;
	cout << "Date of Birth? ";
	cin >> dateOfBirth;
	cout << "Passport Number? ";
	cin >> passportNo;
	cout << "Gender? ";
	cin >> gender;
	cout << "Nationality? ";
	cin >> nationality;

	db.addPassenger(firstName, lastName, dateOfBirth, passportNo, gender, nationality);
}
void doCancel(AirlineDB& db) {
	int bookingNumber;

	cout << "Booking number? ";
	cin >> bookingNumber;

	try {
		Airline& passenger = db.getPassenger(bookingNumber);
		passenger.reserve();
		cout << "Reservation " << bookingNumber << " canceled." << endl;
	}
	catch (const std::logic_error& exception) {
		cerr << "Unable to cancel booking: " << exception.what() << endl;
	}

}
void displayAirline(AirlineDB& db) {
	
}
void doReservedFirstClass(AirlineDB& db) {

}
void doReservedEconomyClass(AirlineDB& db) {

}

