#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include "AirlinePassenger.h"
#include "AirlineFlight.h"

using namespace std;

namespace AirlineReservationSystem {

	AirlinePassenger::AirlinePassenger(const std::string& firstName, const std::string& lastName,
	const std::string& dateOfBirth, const std::string& passportNo,
	const std::string& gender, const std::string& nationality) : mFirstName(firstName), mLastName(lastName),
		mDateOfBirth(dateOfBirth), mPassportNo(passportNo), mGender(gender), mNationality(nationality){		
	}	
	int AirlinePassenger::getBookingNumber() const {
		return mBookingNumber;
	}
	void AirlinePassenger::setBookingNumber(int bookingNo) {
		mBookingNumber = bookingNo;
	}
	
	void AirlinePassenger::reserve() {
		mReserved = true;
	}

	bool AirlinePassenger::isReserved() const {
		return mReserved;
	}	
	
	const std::string& AirlinePassenger::getFirstName() const {
		return mFirstName;
	}
	void AirlinePassenger::setFirstName(const std::string& firstName) {
		mFirstName = firstName;
	}

	const std::string& AirlinePassenger::getLastName() const {
		return mLastName;
	}
	void AirlinePassenger::setLastName(const std::string& lastName) {
		mLastName = lastName;
	}
	const std::string& AirlinePassenger::getDateOfBirth() const {
		return mDateOfBirth;
	}
	void AirlinePassenger::setDateOfBirth(const std::string& dateOfBirth) {
		mDateOfBirth = dateOfBirth;
	}

	const std::string& AirlinePassenger::getPassportNo() const {
		return mPassportNo;
	}
	void AirlinePassenger::setPassportNo(const std::string& passportNo) {
		mPassportNo = passportNo;
	}

	const std::string& AirlinePassenger::getGender() const {
		return mGender;
	}
	void AirlinePassenger::setGender(const std::string& gender) {
		mGender = gender;
	}

	const std::string& AirlinePassenger::getNationality() const {
		return mNationality;
	}
	void AirlinePassenger::setNationality(const std::string& nationality) {
		mNationality = nationality;
	}

	void AirlinePassenger::displayPassengerInfo() const {

		cout << "=====================================================================================================================" << endl;
		cout << (isReserved() ? "Reserved Passenger " : "Not a Reserved Passenger ") << endl;
		cout << "___________________________" << endl;
		cout << "Passenger " << getFirstName() << ", " << getLastName() << endl;
		cout << "Booking Number " << getBookingNumber() << endl;
		cout << "Date of Birth " << getDateOfBirth() << endl;
		cout << "Gender " << getGender() << endl;
		cout << "Nationality " << getNationality() << endl;
		cout << "Passport Number " << getPassportNo() << endl;
	}	

	void AirlinePassenger::ticket() const {
		cout << " |PASSENGER " << endl;
		cout << " |" << getFirstName() << "  " << getLastName() << endl;
		cout << " |" << endl;
		cout << " |*******************************************************************************************************************" << endl;	
		cout << " |                                                                                              |||||||||||||||||||||" << endl;
		cout << " |                                                                                              |||||||||||||||||||||" << endl;
		cout << " |                                                                                              |||||||||||||||||||||" << endl;
		cout << " |*******************************************************************************************************************" << endl;
	}

}

