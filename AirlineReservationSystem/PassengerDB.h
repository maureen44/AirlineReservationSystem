#pragma once
#include <iostream>
#include <vector>
#include "Airline.h"
#include "UserInfo.h"


///-----------------------------------NOT FINISHED-----------------------------------------///

using namespace std;
using namespace AirlineReservationSystem;

namespace AirlineReservationSystem {
	const int kFirstBookingNumber = 1000;

	class PassengerDB
	{
	public:
		Airline& addPassenger(const std::string& firstName,
			const std::string& lastName); //TODO: add DOB, passport no.? 
		Airline& getPassenger(int bookingNo);
		Airline& getPassenger(const std::string& firstName,
			const std::string& lastName);

		void displayPassengerInfo() const;


	private:
		std::vector<Airline> mPassengers;
		int mNextBookingNumber = kFirstBookingNumber;
	};
}