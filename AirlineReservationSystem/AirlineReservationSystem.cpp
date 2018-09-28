// AirlineReservationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include "PassengerDB.h"
#include "FlightDB.h"

using namespace AirlineReservationSystem;
using namespace std;

struct flightDetails {
	int selection = 0;
	std::string airCarrier;
	std::string departureDate;
	std::string departureTime;
	std::string arrivalLocation;
	std::string arrivalDate;
	std::string arrivalTime;
};

void justDisplayAirlineSchedule();
int displayMenu();
void doReserve(PassengerDB& db);
void doBook(FlightDB db);

int main()
{
	FlightDB airlineDetailsReservationDB;
	PassengerDB passengerDetailsReservationDB;	
	
	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0: //EXIT
			return 0;
		case 1:
			doReserve(passengerDetailsReservationDB);
			doBook(airlineDetailsReservationDB);
			break;
		case 2:
			airlineDetailsReservationDB.displayBookingInfo();
			break;
		case 3:
			justDisplayAirlineSchedule();
			break;
		case 4:
			//VIEW AND PRINT TICKET
			break;
		case 5:
			//VIEW FLIGHT DETAILS
			break;
		case 6:
			passengerDetailsReservationDB.displayPassengerInfo();
			break;
		default:
			cerr << "Unknown command." << endl;
			break;
		}			
	}	
	return 0;
}

void justDisplayAirlineSchedule()
{
	cout << "Airline Schedule" << endl;
	cout << "==================================================================================================" << endl;
	for (int i = 0; i < 1; i++) {
		cout << HEADING[i] << endl;
	}
	cout << "==================================================================================================" << endl;
	for (int i = 0; i < 6; i++) {
		cout << AIRLINE_NUMBER[i] << AIRLINE_DETAILS[i] << endl;
	}
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

void doReserve(PassengerDB& db) {
	string firstName;
	string lastName;
	string dateOfBirth;
	string passportNo;
	string gender;
	string nationality;	

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

void doBook(FlightDB db) {
	int number = 0;

	string airCarrier;
	string departureLocation;
	string departureDate;
	string departureTime;
	string arrivalLocation;
	string arrivalDate;
	string arrivalTime;
	cout << endl;
	cout << endl;
	justDisplayAirlineSchedule();
	cout << endl;
	string carrier[] = { "Alaska", "United", "Spirit", "Delta", "American", "JetBlue" };
	string dcity[] = { "Seattle", "Detroit", "Seattle", "Chicago", "Houston", "Seattle" };
	string ddate[] = { "09/20/2018", "09/20/2018", "09/20/2018", "09/20/2018", "09/20/2018", "09/20/2018" };
	string dtime[] = { "11AM", "10AM", "9AM", "11AM", "10AM", "9AM" };
	string acity[] = { "Phoenix", "Phoenix", "Chicago", "Phoenix", "Seattle", "Indianapolis" };
	string adate[] = { "09/20/2018", "09/20/2018", "09/20/2018", "09/20/2018", "09/20/2018", "09/20/2018" };
	string atime[] = { "8PM", "6PM", "8PM", "5PM", "8PM", "10PM" };
	cout << "What airline number would you like to book? ";
	cin >> number;
	///*std::cout << carrier[selection - 1];*/
	airCarrier = carrier[number - 1];

	std::cout << airCarrier << endl;

	/*if (airCarrier == carrier[number - 1]) {*/

		departureLocation = dcity[number - 1];

		departureDate = ddate[number - 1];

		departureTime = dtime[number - 1];

		arrivalLocation = acity[number - 1];

		arrivalDate = adate[number - 1];

		arrivalTime = atime[number - 1];
	/*}*/

	db.addAirline(airCarrier, departureLocation, departureDate, departureTime, arrivalLocation, arrivalDate, arrivalTime);
}



