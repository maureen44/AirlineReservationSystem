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
<<<<<<< HEAD
		UserInfo& addPassenger(const string& firstName,
			const string& lastName, const string& passportNo, const string& gender, const string& nationality); 
		UserInfo& getPassenger(int bookingNo);
		UserInfo& getPassenger(const std::string& firstName,
=======
		Airline& addPassenger(const std::string& firstName,
			const std::string& lastName); //TODO: add DOB, passport no.? 
		Airline& getPassenger(int bookingNo);
		Airline& getPassenger(const std::string& firstName,
>>>>>>> 88d18be9357448245339a57aeb3ea0798e866b44
			const std::string& lastName);

		void displayPassengerInfo() const;


	private:
		std::vector<Airline> mPassengers;
		int mNextBookingNumber = kFirstBookingNumber;
	};
}