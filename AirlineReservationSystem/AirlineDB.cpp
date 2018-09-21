#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdexcept>
//#include "PassengerDB.h"
#include "AirlineDB.h"

using namespace std;

namespace AirlineReservationSystem {

	AirlinePassenger& AirlineDB::addPassenger(const std::string& firstName, const std::string& lastName,
		const std::string& dateOfBirth, const std::string& passportNo,
		const std::string& gender, const std::string& nationality) {
		AirlinePassenger thePassenger(firstName, lastName, dateOfBirth,
			passportNo, gender, nationality);
		thePassenger.setBookingNumber(mNextBookingNumber++);
		thePassenger.setSeat(mNextSeatNumber++);
		thePassenger.reserve();
		mPassengers.push_back(thePassenger);
		return mPassengers[mPassengers.size() - 1];
	}

	AirlinePassenger& AirlineDB::getPassenger(int bookingNo, int seatNo) {
		for (auto& passenger : mPassengers) {
			if (passenger.getBookingNumber() == bookingNo && 
				passenger.getSeat() == seatNo) {
				return passenger;
			}

		}		
		throw logic_error("No Passenger found.");
	}
	AirlinePassenger& AirlineDB::getPassenger(const std::string& firstName, const std::string& lastName,
		const std::string& dateOfBirth, const std::string& passportNo,
		const std::string& gender, const std::string& nationality, const char airline) {
		for (auto& passenger : mPassengers) {
			if (passenger.getFirstName() == firstName &&
				passenger.getLastName() == lastName &&
				passenger.getDateOfBirth() == dateOfBirth && 
				passenger.getPassportNo() == passportNo &&
				passenger.getGender() == gender && 
				passenger.getNationality() == nationality &&
				passenger.getAirline() == airline) {
				return passenger;
			}
		}

		throw logic_error("No Passenger found.");

	}

	//TODO
	void AirlineDB::displayBookingInfo() const {
				
	}

	void AirlineDB::displayPassengerInfo() const {
		for (const auto& passenger : mPassengers) {
			if (passenger.isReserved()) {
				passenger.displayPassengerInfo();
			}
		}
	}

	void AirlineDB::displayAll() const {
		for (const auto& passenger : mPassengers) {
			passenger.displayPassengerInfo();
		}
	}

}
