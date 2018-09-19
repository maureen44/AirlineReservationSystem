#pragma once
#include <iostream>
#include <vector>
#include "Airline.h"

namespace AirlineReservationSystem {
	const int kAirlineNumber = 200;
	const int kFirstBookingNumber = 1000;
	const int kSeatNumber = 1;
	

	class AirlineDB {
	public:
		Airline& addAirline(const std::string& departureLocation, const std::string& departureDate,
			const std::string& departureTime, const std::string& arrivalLocation,
			const std::string& arrivalDate, const std::string& arrivalTime);
		Airline& getAirline(int airlineNO);
		Airline& getAirline(const std::string& departureLocation, const std::string& departureDate,
			const std::string& departureTime, const std::string& arrivalLocation,
			const std::string& arrivalDate, const std::string& arrivalTime);
		
		Airline& addPassenger(const std::string& firstName, const std::string& lastName,
			const std::string& dateOfBirth, const std::string& passportNo,
			const std::string& gender, const std::string& nationality);
		Airline& getPassenger(int bookingNo);
		Airline& getPassenger(const std::string& firstName, const std::string& lastName,
			const std::string& dateOfBirth, const std::string& passportNo,
			const std::string& gender, const std::string& nationality);

		void displayAll() const;

		void displayAirlineSchedule() const;

		void displayPassengerInfo() const;		
		
		
	private:
		std::vector<Airline> mAirlines;
		int mNextAirlineNumber = kAirlineNumber;
		std::vector<Airline> mPassengers;
		int mNextBookingNumber = kFirstBookingNumber;
	};
}
