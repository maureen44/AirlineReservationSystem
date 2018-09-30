#pragma once
#include <iostream>
#include <vector>
#include "AirlineFlight.h"


namespace AirlineReservationSystem {
	const int kFirstSeatNumber = 1;

	class FlightDB {
	public:
		AirlineFlight& addAirline(std::string& airCarrier, std::string& departureLocation, std::string& departureDate,
			std::string& departureTime, std::string& arrivalLocation,
			std::string& arrivalDate, std::string& arrivalTime, int seat, std::string& departureTerminal, std::string& arrivalTerminal);


		AirlineFlight& getAirline(std::string& airCarrier, std::string& departureLocation, std::string& departureDate,
			std::string& departureTime, std::string& arrivalLocation,
			std::string& arrivalDate, std::string& arrivalTime, int seat, std::string& departureTerminal, std::string& arrivalTerminal);

		void displayBookingInfo() const;
		void displayFlightDetails() const;
		void ticket() const;
	private:
		std::vector<AirlineFlight> mAirlines;								
	};
}