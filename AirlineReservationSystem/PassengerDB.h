#pragma once
#include <iostream>
#include <vector>
#include "Airline.h"


///-----------------------------------NOT FINISHED-----------------------------------------///

using namespace std;
using namespace AirlineReservationSystem;

namespace AirlineReservationSystem {
	const int kFirstBookingNumber = 1000;

	class PassengerDB
	{
	public:
		Airline& addPassenger(const std::string& firstName,
			const std::string& lastName, const string& passportNo, const string& gender, const string& nationality, const string& dateOfBirth);
		Airline& getBookingInfo(int bookingNo);
		Airline& getBookingInfo(const std::string& firstName,
			const std::string& lastName);

		void displayPassengerInfo() const;


	private:
		vector<Airline> mPassengers;
		int mNextBookingNumber = kFirstBookingNumber;
	};
}