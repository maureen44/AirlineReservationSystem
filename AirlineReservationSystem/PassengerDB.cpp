#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "PassengerDB.h"

using namespace std;

namespace AirlineReservationSystem {

	AirlinePassenger& PassengerDB::addPassenger(const std::string& firstName, const std::string& lastName,
		const std::string& dateOfBirth, const std::string& passportNo,
		const std::string& gender, const std::string& nationality) {
		AirlinePassenger thePassenger(firstName, lastName, dateOfBirth,
			passportNo, gender, nationality);
		thePassenger.setBookingNumber(mNextBookingNumber++);
		thePassenger.reserve();
		mPassengers.push_back(thePassenger);
		return mPassengers[mPassengers.size() - 1];
	}

	AirlinePassenger& PassengerDB::getPassenger(int bookingNo) {
		for (auto& passenger : mPassengers) {
			if (passenger.getBookingNumber() == bookingNo) {
				return passenger;
			}
		}
		throw logic_error("No Passenger found.");
	}

	AirlinePassenger& PassengerDB::getPassenger(const std::string& firstName, const std::string& lastName) {
		for (auto& passenger : mPassengers) {
			if (passenger.getFirstName() == firstName &&
				passenger.getLastName() == lastName) {
				return passenger;
			}

		}
	}


	AirlinePassenger& PassengerDB::getPassenger(/*const std::string& firstName, const std::string& lastName,*/
		const std::string& dateOfBirth, const std::string& passportNo,
		const std::string& gender, const std::string& nationality) {
		for (auto& passenger : mPassengers) {
			if (/*passenger.getFirstName() == firstName &&
				passenger.getLastName() == lastName &&*/
				passenger.getDateOfBirth() == dateOfBirth &&
				passenger.getPassportNo() == passportNo &&
				passenger.getGender() == gender &&
				passenger.getNationality() == nationality) {
				return passenger;
			}
		}

		throw logic_error("No Passenger found.");

	}

	void PassengerDB::displayPassengerInfo() const {
		for (const auto& passenger : mPassengers) {
			if (passenger.isReserved()) {
				passenger.displayPassengerInfo();
			}
		}
	}


}
