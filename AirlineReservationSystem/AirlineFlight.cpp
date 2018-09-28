#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include "AirlineFlight.h"

using namespace std;

namespace AirlineReservationSystem {

	//Airline info
	AirlineFlight::AirlineFlight(std::string& airCarrier, std::string& departureLocation, std::string& departureDate,
		std::string& departureTime, std::string& arrivalLocation,
		std::string& arrivalDate, std::string& arrivalTime) : mAirline(airCarrier), mDepartureLocation(departureLocation), mAirlineDepartureDate(departureDate),
		mDepartureTime(departureTime), mArrivalLocation(arrivalLocation), mAirlineArrivalDate(arrivalDate), mArrivalTime(arrivalTime) {

	}
	int AirlineFlight::getSeatNumber() const {
		return mSeatNumber;
	}
	void AirlineFlight::setSeatNumber(int seatNo) {

		mSeatNumber = seatNo;
	}
	
	const std::string& AirlineFlight::getAirline() const {
		return mAirline;
	}
	void AirlineFlight::setAirline(std::string& airCarrier) {
		mAirline = airCarrier;
	}
	const std::string& AirlineFlight::getDepartureLocation() const{
		return mDepartureLocation;
	}
	void AirlineFlight::setDepatureLocation(std::string& departureLocation) {		
		mDepartureLocation = departureLocation;
	}

	const std::string& AirlineFlight::getDepartureDate() const {
		return mAirlineDepartureDate;
	}
	void AirlineFlight::setDepartureDate(std::string& departureDate) {
		mAirlineDepartureDate = departureDate;
	}

	const std::string& AirlineFlight::getDepartureTime() const {
		return mDepartureTime;
	}
	void AirlineFlight::setDepartureTime(std::string& departureTime) {
		mDepartureTime = departureTime;
	}

	const std::string& AirlineFlight::getArrivalLocation() const {
		return mArrivalLocation;
	}
	void AirlineFlight::setArrivalLocation(std::string& arrivalLocation) {
		mArrivalLocation = arrivalLocation;
	}

	const std::string& AirlineFlight::getArrivalDate() const {
		return mAirlineArrivalDate;
	}
	void AirlineFlight::setArrivaDate(std::string& arrivalDate) {
		mAirlineArrivalDate = arrivalDate;
	}

	const std::string& AirlineFlight::getArrivalTime() const {
		return mArrivalTime;
	}
	void AirlineFlight::setArrivalTime(std::string& arrivalTime) {
		mArrivalTime = arrivalTime;
	}

	int AirlineFlight::getAirlinePrice() const {
		return mAirlinePrice;
	}

	void AirlineFlight::setAirlinePrice(int newAirlinePrice) {
		mAirlinePrice = newAirlinePrice;
	}

	bool AirlineFlight::isBooked() const {
		return mBooked;

	}

	void AirlineFlight::book() {
		mBooked = true;
	}

	void AirlineFlight::displayBookingInfo() const {
		cout << "==================================================================================" << endl;
		cout << (isBooked() ? "Booked Airline " : "Not Booked Airline ");
		/*cout << "Airline Number " << getAirlineNo() << endl;*/
		cout << "AirCarier " << getAirline() << endl;
		cout << "Departure City " << getDepartureLocation() << endl;
		cout << "Departure Date " << getDepartureDate() << endl;
		cout << "Departure Time " << getDepartureTime() << endl;
		cout << "Arrival City " << getArrivalLocation() << endl;
		cout << "Arrival Date " << getArrivalDate() << endl;
		cout << "Airline Price " << getAirlinePrice() << endl;
		cout << "Arrival Time " << getArrivalTime() << endl;
		cout << "Seat Number " << getSeatNumber() << endl;
	}

}