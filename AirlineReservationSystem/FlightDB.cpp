#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "FlightDB.h"

using namespace std;

namespace AirlineReservationSystem {

	AirlineFlight& FlightDB::addAirline(std::string& airCarrier, std::string& departureLocation, std::string& departureDate,
		std::string& departureTime, std::string& arrivalLocation,
		std::string& arrivalDate, std::string& arrivalTime, int seat) {
		AirlineFlight theAirline(airCarrier, departureLocation, departureDate, departureTime, arrivalLocation, arrivalDate, arrivalTime, seat);
		/*theAirline.setAirlineNO(mNextAirlineNumber++);*/
		/*theAirline.setSeatNumber(mNextSeatNumber++);*/
		theAirline.book();
		mAirlines.push_back(theAirline);
		return mAirlines[mAirlines.size() - 1];

	}

	/*AirlineFlight& FlightDB::getAirline(int seatNo) {
		for (auto& airline : mAirlines) {
			if (airline.getSeatNumber() == seatNo) {
				return airline;
			}
		}
		throw logic_error("No seat found.");
	}*/

	AirlineFlight& FlightDB::getAirline(std::string& airCarrier, std::string& departureLocation, std::string& departureDate,
		std::string& departureTime, std::string& arrivalLocation,
		std::string& arrivalDate, std::string& arrivalTime, int seat) {
		for (auto& airline : mAirlines) {
			if (airline.getAirline() == airCarrier && 
				airline.getDepartureLocation() == departureLocation &&
				airline.getArrivalDate() == departureDate &&
				airline.getDepartureTime() == departureTime && 
				airline.getArrivalLocation() == arrivalLocation &&
				airline.getArrivalDate() == arrivalDate &&
				airline.getArrivalTime() == arrivalTime) {
				return airline;
			}
		}
		throw logic_error("No Airline/Flight with those details found.");
	}

	void FlightDB::displayBookingInfo() const {
		for (const auto& airline : mAirlines) {
			if (airline.isBooked()) {
				airline.displayBookingInfo();
			}
		}
	}
}