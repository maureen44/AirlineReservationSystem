#pragma once
#include <iostream>
#include <vector>
#include "AirlineFlight.h"


namespace AirlineReservationSystem {
	const int kFirstSeatNumber = 1;
	/*const int kFirstAirlineNumber = 1;*/

	class FlightDB {
	public:
		AirlineFlight& addAirline(std::string& airCarier, std::string& departureLocation, std::string& departureDate,
			std::string& departureTime, std::string& arrivalLocation,
			std::string& arrivalDate, std::string& arrivalTime);

		AirlineFlight& getAirline(int seatNo);

		//Airline& getAirline();

		AirlineFlight& getAirline(std::string& airCarier, std::string& departureLocation, std::string& departureDate,
			std::string& departureTime, std::string& arrivalLocation,
			std::string& arrivalDate, std::string& arrivalTime);

		void displayBookingInfo() const;
	private:
		std::vector<AirlineFlight> mAirlines;
		int mNextSeatNumber = kFirstSeatNumber;
		/*int mNextAirlineNumber = kFirstAirlineNumber;*/
	};
}