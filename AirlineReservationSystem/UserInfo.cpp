#include "pch.h"
#include <iostream>
#include "Airline.h"
#include "UserInfo.h"

using namespace std;

namespace AirlineReservationSystem {

	UserInfo::UserInfo(const std::string& firstName, const std::string& lastName,
		const std::string& dateOfBirth, const std::string& passportNo,
		const std::string& gender, const std::string& nationality) : mFirstName(firstName), mLastName(lastName),
		mDateOfBirth(dateOfBirth), mPassportNo(passportNo), mGender(gender), mNationality(nationality) {

	}

	const std::string& UserInfo::getFirstName() const {
		return mFirstName;
	}
	void UserInfo::setFirstName(const std::string& firstName) {
		mFirstName = firstName;
	}

	const std::string& UserInfo::getLastName() const {
		return mLastName;
	}
	void UserInfo::setLastName(const std::string& lastName) {
		mLastName = lastName;
	}
	const std::string& UserInfo::getDateOfBirth() const {
		return mDateOfBirth;
	}
	void UserInfo::setDateOfBirth(const std::string& dateOfBirth) {
		mDateOfBirth = dateOfBirth;
	}

	const std::string& UserInfo::getPassportNo() const {
		return mPassportNo;
	}
	void UserInfo::setPassportNo(const std::string& passportNo) {
		mPassportNo = passportNo;
	}

	const std::string& UserInfo::getGender() const {
		return mGender;
	}
	void UserInfo::setGender(const std::string& gender) {
		mGender = gender;
	}

	const std::string& UserInfo::getNationality() const {
		return mNationality;
	}
	void UserInfo::setNationality(const std::string& nationality) {
		mNationality = nationality;
	}

	int UserInfo::getBookingNumber() const {
		return mBookingNumber;
	}
	void UserInfo::setBookingNumber(int bookingNo) {
		mBookingNumber = bookingNo;
	}

	/*const std::string& getPassportExpiration() const;
	void setPassportExpiration()*/;

	void UserInfo::userTicketInformation(const std::string& firstName, const std::string& lastName) {

	}
	void Airline::userTicketInformation(int AirlineNumber, const std::string& departureLocation,
		const std::string& depatureDate, const std::string& departureTime,
		const std::string& arrivalLocation, const std::string& arrivalDate,
		const std::string& arrivalTime) {

	}
	
	void UserInfo::displayPassagerInfo() const {
		cout << "Passanger " << getFirstName() << ", " << getLastName() << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Date of Birth " << getDateOfBirth() << endl;
		cout << "Gender " << getGender() << endl;
		cout << "Nationality " << getNationality() << endl;
		cout << "Passport Number " << getPassportNo() << endl;
	}

}