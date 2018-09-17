#include "pch.h"
#include <iostream>
#include "Airline.h"

using namespace std;

namespace AirlineReservationSystem {

	Airline::Airline(const std::string& departureLocation, const std::string& departureDate,
		const std::string& departureTime, const std::string& arrivalLocation,
		const std::string& arrivalDate, const std::string& arrivalTime,
		int airlineNo)
		: mDepartureLocation(departureLocation), mAirlineDepartureDate(departureDate),
		mDepartureTime(departureTime), mArrivalLocation(arrivalLocation), mAirlineArrivalDate(arrivalDate),
		mArrivalTime(arrivalTime), mAirlineNumber(airlineNo) {

	}

	const std::string& Airline::getAirlineNo() const {
	
	}
	void Airline::setAirlineNO(const std::string& airlineNo) {
	
	}

	const std::string& Airline::getAirlineSeats() const {
	
	}
	void Airline::setAirlineSeats(const std::string& menu) {
	
	}

	const std::string& Airline::getDepartureLocation() const {
	
	}
	void Airline::setDepatureLocation(const std::string& departureLocation) {
	
	}

	const std::string& Airline::getArrivalLocation() const {
	
	}
	void Airline::setArrivalLocation(const std::string& arrivalLocation) {
	
	}

	void Airline::reserved() {


	}
	void Airline::notReserved() {
	
	
	}

	bool Airline::isReserved() const {
		return mReserved;

	}

	void Airline::displayAirline() const {


	}

	int Airline::getAirlineNumberOfSeats() const {
	
	}
	void Airline::setAirlineNumberOfSeats(int numberOfSeats) {
	
	}

}