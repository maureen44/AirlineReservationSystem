#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include "AirlineFlight.h"

using namespace std;

namespace AirlineReservationSystem {

	//Airline info
	AirlineFlight::AirlineFlight(std::string& airCarier, std::string& departureLocation, std::string& departureDate,
		std::string& departureTime, std::string& arrivalLocation,
		std::string& arrivalDate, std::string& arrivalTime) : mAirline(airCarier), mDepartureLocation(departureLocation), mAirlineDepartureDate(departureDate),
		mDepartureTime(departureTime), mArrivalLocation(arrivalLocation), mAirlineArrivalDate(arrivalDate), mArrivalTime(arrivalTime) {

	}
	int AirlineFlight::getSeatNumber() const {
		return mSeatNumber;
	}
	void AirlineFlight::setSeatNumber(int seatNo) {

		mSeatNumber = seatNo;
	}

	/*int Airline::getAirlineNo() const {		
		return mAirlineNumber;
	}
	void Airline::setAirlineNO(int airlineNo) {

		mAirlineNumber = airlineNo;
	}*/	

	const std::string& AirlineFlight::getAirline() const {
		return mAirline;
	}
	void AirlineFlight::setAirline(std::string& airline) {
		int selection = 0;
		std::string carrier[] = { "Alaska", "United", "Spirit", "Delta", "American", "JetBlue" };
		airline = carrier[selection - 1];
		mAirline = airline;
	}
	const std::string& AirlineFlight::getDepartureLocation() const{
		return mDepartureLocation;
	}
	void AirlineFlight::setDepatureLocation(std::string& departureLocation) {
		int selection = 0;
		std::string dcity[] = { "Seattle Detroit Seattle Chicago Houston Seattle" };
		departureLocation = dcity[selection - 1];
		mDepartureLocation = departureLocation;
	}

	const std::string& AirlineFlight::getDepartureDate() const {
		return mAirlineDepartureDate;
	}
	void AirlineFlight::setDepartureDate(std::string& departureDate) {
		int selection = 0;
		std::string ddate[] = { "09/20/2018 09/20/2018 09/20/2018 09/20/2018 09/20/2018 09/20/2018" };
		departureDate = ddate[selection - 1];
		mAirlineDepartureDate = departureDate;
	}

	const std::string& AirlineFlight::getDepartureTime() const {
		return mDepartureTime;
	}
	void AirlineFlight::setDepartureTime(std::string& departureTime) {
		int selection = 0;
		std::string dtime[] = { "11AM 10AM 9AM 11AM 10AM 9AM" };
		departureTime = dtime[selection - 1];
		mDepartureTime = departureTime;
	}

	const std::string& AirlineFlight::getArrivalLocation() const {
		return mArrivalLocation;
	}
	void AirlineFlight::setArrivalLocation(std::string& arrivalLocation) {
		int selection = 0;
		std::string acity[] = { "Phoenix Phoenix Chicago Phoenix Seattle Indianapolis" };
		arrivalLocation = acity[selection - 1];
		mArrivalLocation = arrivalLocation;
	}

	const std::string& AirlineFlight::getArrivalDate() const {
		return mAirlineArrivalDate;
	}
	void AirlineFlight::setArrivaDate(std::string& arrivalDate) {
		int selection = 0;
		std::string adate[] = { "09/20/2018 09/20/2018 09/20/2018 09/20/2018 09/20/2018 09/20/2018" };
		arrivalDate = adate[selection - 1];
		mAirlineArrivalDate = arrivalDate;
	}

	const std::string& AirlineFlight::getArrivalTime() const {
		return mArrivalTime;
	}
	void AirlineFlight::setArrivalTime(std::string& arrivalTime) {
		int selection = 0;
		std::string atime[] = { "8PM 6PM 8PM 5PM 8PM 10PM" };
		arrivalTime = atime[selection - 1];
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