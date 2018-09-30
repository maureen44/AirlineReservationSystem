 #pragma once
#include <iostream>
#include <vector>
#include "AirlinePassenger.h"


namespace AirlineReservationSystem {
	const int kFirstBookingNumber = 1000;
	
	

	class PassengerDB {
	public:
		
		AirlinePassenger& addPassenger(const std::string& firstName, const std::string& lastName,
			const std::string& dateOfBirth, const std::string& passportNo,
			const std::string& gender, const std::string& nationality);

		AirlinePassenger& getPassenger(int bookingNo);

		AirlinePassenger& getPassenger(const std::string& firstName, const std::string& lastName,
			const std::string& dateOfBirth, const std::string& passportNo,
			const std::string& gender, const std::string& nationality);		

		void displayPassengerInfo() const;	
		void ticket() const;
		
	private:
		std::vector<AirlinePassenger> mPassengers;
		int mNextBookingNumber = kFirstBookingNumber;
		
	};
}
