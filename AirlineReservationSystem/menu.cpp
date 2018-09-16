#include "pch.h"
#include <iostream>
#include "menu.h"
#include "Airline.h"

using namespace std;
using namespace AirlineReservationSystem; 

	int displayMenu() {
		int selection;
		cout << endl;
		cout << "Airline Reservation System" << endl;
		cout << "___________________________" << endl;
		cout << "1. Book A Flight" << endl;
		cout << "2. View Booking Information" << endl;
		cout << "3. View Flight Schedule" << endl;
		cout << "4. View and Print Schedule" << endl;
		cout << "5. View Flight Details" << endl;
		cout << "0. Exit" << endl;
		cout << "____________________________" << endl;
		cin >> selection;

		return selection;




	}
