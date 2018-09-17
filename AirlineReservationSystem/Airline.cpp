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

	int Airline::getAirlineNo() const {
		return mAirlineNumber;
	}
	void Airline::setAirlineNO(int airlineNo) {
		mAirlineNumber = airlineNo;
	}

	int Airline::getAirlineSeats() const {
		return mAirlineNumberOfSeats;
	}
	void Airline::setAirlineSeats(int newNumberOfSeats) {
		mAirlineNumberOfSeats = newNumberOfSeats;
	}

	const std::string& Airline::getDepartureLocation() const {
		return mDepartureLocation;
	}
	void Airline::setDepatureLocation(const std::string& departureLocation) {
		mDepartureLocation = departureLocation;
	}

	const std::string& Airline::getDepartureDate() const {

		return mAirlineDepartureDate;
	}
	void Airline::setDepatureDate(const std::string& departureDate) {
		mAirlineDepartureDate = departureDate;
	}

	const std::string& Airline::getDepartureTime() const {
		return mDepartureTime;
	}
	void Airline::setDepatureTime(const std::string& departureTime) {
		mDepartureTime = departureTime;
	}

	const std::string& Airline::getArrivalLocation() const {
		return mArrivalLocation;
	}
	void Airline::setArrivalLocation(const std::string& arrivalLocation) {
		mArrivalLocation = arrivalLocation;
	}

	const std::string& Airline::getArrivalDate() const {

		return mAirlineArrivalDate;
	}
	void Airline::setArrivalDate(const std::string& arrivalDate) {

		mAirlineArrivalDate = arrivalDate;
	}

	const std::string& Airline::getArrivalTime() const {
		return mArrivalTime;
	}
	void Airline::setArrivalTime(const std::string& arrivalTime) {
		mArrivalTime = arrivalTime;
	}

	void Airline::reserved() {
		mReserved = true;

	}
	void Airline::notReserved() {
		mReserved = false;	
	}

	bool Airline::isReserved() const {
		return mReserved;

	}
	
	int Airline::getSeatNumber() const {
		return mSeatNumber;
	}
	void Airline::setSeatNumber(int seatNo) {
		mSeatNumber = seatNo;
	}

	void Airline::displayAirline() const {

		cout << "Airline " << getAirlineNo();
		cout << "Departure " << getDepartureLocation();
		cout << "Departure Date " << getDepartureDate();
		cout << "Departure Time " << getDepartureTime();
		cout << "Arrival " << getArrivalLocation();
		cout << "Arrival Date " << getArrivalDate();
		cout << "Arrival Time " << getArrivalTime();
	}

}