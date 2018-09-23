#pragma once
#include <iostream>
#include <vector>
#include "Airline.h"

namespace AirlineReservationSystem {
	const int kFirstBookingNumber = 1000;
	const int kFirstSeatNumber = 1;
	

	class AirlineDB {
	public:
		
		AirlinePassenger& addPassenger(const std::string& firstName, const std::string& lastName,
			const std::string& dateOfBirth, const std::string& passportNo,
			const std::string& gender, const std::string& nationality, std::vector<std::string> airline);
		AirlinePassenger& getPassenger(int bookingNo, int SeatNo);
		AirlinePassenger& getPassenger(const std::string& firstName, const std::string& lastName,
			const std::string& dateOfBirth, const std::string& passportNo,
			const std::string& gender, const std::string& nationality);

		void airline() const;

		void displayBookingInfo() const;

		void displayPassengerInfo() const;			
		
	private:
		std::vector<AirlinePassenger> mPassengers;
		int mNextBookingNumber = kFirstBookingNumber;
		int mNextSeatNumber = kFirstSeatNumber;
	};
}
