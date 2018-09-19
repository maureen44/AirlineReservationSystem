#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdexcept>
//#include "PassengerDB.h"
#include "AirlineDB.h"

using namespace std;

namespace AirlineReservationSystem {

	Airline& AirlineDB::addAirline(const std::string& departureLocation, const std::string& departureDate,
		const std::string& departureTime, const std::string& arrivalLocation,
		const std::string& arrivalDate, const std::string& arrivalTime) {
		Airline theAirline(departureLocation, departureDate,
			departureTime, arrivalLocation, arrivalDate, arrivalTime);
		theAirline.setAirlineNO(mNextAirlineNumber++);
		/*theAirline.reserve();*/
		mAirlines.push_back(theAirline);

		return mAirlines[mAirlines.size() - 1];

	}
	Airline& AirlineDB::getAirline(int airlineNO) {
		for (auto& airline : mAirlines) {
			if (airline.getAirlineNo() == airlineNO) {
				return airline;
			}
		}
		throw logic_error("No Airline found.");
	}
	Airline& AirlineDB::getAirline(const std::string& departureLocation, const std::string& departureDate,
		const std::string& departureTime, const std::string& arrivalLocation,
		const std::string& arrivalDate, const std::string& arrivalTime) {
		for (auto& airline : mAirlines) {
			if (airline.getDepartureLocation() == departureLocation &&
				airline.getDepartureDate() == departureDate &&
				airline.getDepartureTime() == departureTime &&
				airline.getArrivalLocation() == arrivalLocation &&
				airline.getArrivalDate() == arrivalDate &&
				airline.getArrivalTime() == arrivalTime) {
				return airline;
			}
		}
		throw logic_error("No Airline found.");
	}
	Airline& AirlineDB::addPassenger(const std::string& firstName, const std::string& lastName,
		const std::string& dateOfBirth, const std::string& passportNo,
		const std::string& gender, const std::string& nationality) {
		Airline thePassenger(firstName, lastName, dateOfBirth,
			passportNo, gender, nationality);
		thePassenger.setBookingNumber(mNextBookingNumber++);
		thePassenger.reserve();
		mPassengers.push_back(thePassenger);
		return mPassengers[mPassengers.size() - 1];
	}

	Airline& AirlineDB::getPassenger(int bookingNo) {
		for (auto& passenger : mPassengers) {
			if (passenger.getBookingNumber() == bookingNo) {
				return passenger;
			}

		}		
		throw logic_error("No Passenger found.");
	}
	Airline& AirlineDB::getPassenger(const std::string& firstName, const std::string& lastName,
		const std::string& dateOfBirth, const std::string& passportNo,
		const std::string& gender, const std::string& nationality) {
		for (auto& passenger : mPassengers) {
			if (passenger.getFirstName() == firstName &&
				passenger.getLastName() == lastName &&
				passenger.getDateOfBirth() == dateOfBirth && 
				passenger.getPassportNo() == passportNo &&
				passenger.getGender() == gender && 
				passenger.getNationality() == nationality) {
				return passenger;
			}
		}

		throw logic_error("No Passenger found.");

	}

	void AirlineDB::displayAirlineSchedule() const {
		for (const auto& airline : mAirlines) {
			airline.displayAirline();
		}

	}

	void AirlineDB::displayPassengerInfo() const {
		for (const auto& passenger : mPassengers) {
			if (passenger.isReserved()) {
				passenger.displayPassengerInfo();
			}
		}
	}

	void AirlineDB::displayAll() const {

	}
	

	
	/*
	Given a row number and a column number.
	this function will return the price of
	that ticket.
	*/
	/*int price(int row, int col) {
		return 100 - 2 * (NUM_ROWS - row)
			- (col > NUM_COLS / 2 ?
				abs(1 + NUM_COLS / 2 - col) :
				abs(NUM_COLS / 2 - col));
	}*/
}
