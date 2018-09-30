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
		std::string& arrivalDate, std::string& arrivalTime, int seat, std::string& departureTerminal, std::string& arrivalTerminal) : mAirline(airCarrier), mDepartureLocation(departureLocation), mAirlineDepartureDate(departureDate),
		mDepartureTime(departureTime), mArrivalLocation(arrivalLocation), mAirlineArrivalDate(arrivalDate), mArrivalTime(arrivalTime), mSeatNumber(seat), mDepartureTerminal(departureTerminal), mArrivalTerminal(arrivalTerminal) {
		
	}
	int AirlineFlight::getSeatNumber() const {
		return mSeatNumber;
	}
	void AirlineFlight::setSeatNumber(int seat) {

		mSeatNumber = seat;
	}
	
	const std::string& AirlineFlight::getAirline() const {
		return mAirline;
	}
	void AirlineFlight::setAirline(std::string& airCarrier) {
		
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

	const std::string& AirlineFlight::getArrivalTerminal() const {
		return mArrivalTerminal;
	}
	void AirlineFlight::setArrivalTerminal(std::string& arrivalTerminal) {
		mArrivalTerminal = arrivalTerminal;
	}

	const std::string& AirlineFlight::getDepartureTerminal() const {
		return mDepartureTerminal;
	}
	void AirlineFlight::setDepartureTerminal(std::string& departureTerminal) {
		mDepartureTerminal = departureTerminal;
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

	void AirlineFlight::displayFlightDetails() const {
		cout << "===================================================================================" << endl;
		cout << "Flight Details" << endl;
		cout << "===================================================================================" << endl;
		cout <<  (isBooked() ? "| Booked Airline " : "| Non Booked Airline ") << endl;
		cout << " Carrier: " << getAirline() << endl;
		cout << " From " << getDepartureLocation() << " to " << getArrivalLocation() << endl;
		cout << "====================================================================================" << endl;
		cout << " Departure Terminal " << setw(16) << getDepartureTerminal() << setw(24) << "Arrival Terminal " << setw(16) <<getArrivalTerminal() << endl;
		cout << " Departure Time " << setw(20) << getDepartureTime() << setw(20) << "Arrival Time " << setw(20) << getArrivalTime() << endl;
		cout << " Departure Date " << setw(20) << getDepartureDate() << setw(20) << "Arrival Date " << setw(20) << getArrivalDate() << endl;
		cout << "====================================================================================" << endl; 
	}

	void AirlineFlight::ticket() const {
		cout << endl;
		cout << " |*******************************************************************************************************************" << endl;
		cout << " |" << endl;
		cout << " |FLIGHT " << setw(35) << "DESTINATION " << endl;
		cout << " |" << getAirline() << setw(32) << getDepartureLocation() << "  To  " << getArrivalLocation() << endl;
		cout << " |" << endl;
		cout << " |DEPARTURE " << setw(39) << "DEPARTURE TERMINAL " << endl;
		cout << " |" << getDepartureTime() << "  " << getDepartureDate() << setw(15) << getDepartureTerminal() << endl;
		cout << " |" << endl;
		cout << " |SEAT " << endl;
		cout << " |" << getSeatNumber() << endl;
		cout << " |" << endl;
	
	}



}
//setw(40)