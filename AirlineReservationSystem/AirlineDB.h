#pragma once
#include <iostream>
#include <vector>
#include "Airline.h"
#include "UserInfo.h"

namespace AirlineReservationSystem {
	const int kAirlineNumber = 200;
	const int kSeatNumber = 1;

	class AirlineDatabase {
	public:
		Airline& addAirline(int airlineNo);
		Airline& addAirline(const std::string& departureLocation, const std::string& departureDate,
			const std::string& departureTime, const std::string& arrivalLocation,
			const std::string& arrivalDate, const std::string& arrivalTime);
		Airline& getAirline(const std::string& departureLocation, const std::string& departureDate,
			const std::string& departureTime, const std::string& arrivalLocation,
			const std::string& arrivalDate, const std::string& arrivalTime);
	private:
		std::vector<Airline> mAirline;
	};
}
