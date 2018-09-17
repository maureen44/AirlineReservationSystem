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
		UserInfo& addPassenger(const std::string& firstName,
			const std::string& lastName); //TODO: add DOB, passport no.? 
		UserInfo& getPassenger(int bookingNo);
		UserInfo& getPassenger(const std::string& firstName,
			const std::string& lastName);

		void displayPassengerInfo() const;


	private:
		std::vector<UserInfo> mPassengers;
		int mNextBookingNumber = kFirstBookingNumber;
	};
}