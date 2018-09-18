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

	//Passenger Info

	/*Airline::UserInfo(const std::string& firstName, const std::string& lastName,
		const std::string& dateOfBirth, const std::string& passportNo,
		const std::string& gender, const std::string& nationality) : mFirstName(firstName), mLastName(lastName),
		mDateOfBirth(dateOfBirth), mPassportNo(passportNo), mGender(gender), mNationality(nationality) {

	}*/

	const std::string& Airline::getFirstName() const {
		return mFirstName;
	}
	void Airline::setFirstName(const std::string& firstName) {
		mFirstName = firstName;
	}

	const std::string& Airline::getLastName() const {
		return mLastName;
	}
	void Airline::setLastName(const std::string& lastName) {
		mLastName = lastName;
	}
	const std::string& Airline::getDateOfBirth() const {
		return mDateOfBirth;
	}
	void Airline::setDateOfBirth(const std::string& dateOfBirth) {
		mDateOfBirth = dateOfBirth;
	}

	const std::string& Airline::getPassportNo() const {
		return mPassportNo;
	}
	void Airline::setPassportNo(const std::string& passportNo) {
		mPassportNo = passportNo;
	}

	const std::string& Airline::getGender() const {
		return mGender;
	}
	void Airline::setGender(const std::string& gender) {
		mGender = gender;
	}

	const std::string& Airline::getNationality() const {
		return mNationality;
	}
	void Airline::setNationality(const std::string& nationality) {
		mNationality = nationality;
	}

	int Airline::getBookingNumber() const {
		return mBookingNumber;
	}
	void Airline::setBookingNumber(int bookingNo) {
		mBookingNumber = bookingNo;
	}

	bool Airline::isPassengerBooked() const {
		return mBooked;
	}

	void Airline::book() {
		mBooked = true;
	}
	void Airline::cancel() {
		mBooked = false;
	}

	/*const std::string& getPassportExpiration() const;
	void setPassportExpiration()*/;

	void Airline::userTicketInformation(const std::string& firstName, const std::string& lastName) {

	}
	void Airline::userTicketInformation(int AirlineNumber, const std::string& departureLocation,
		const std::string& depatureDate, const std::string& departureTime,
		const std::string& arrivalLocation, const std::string& arrivalDate,
		const std::string& arrivalTime) {

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

	void Airline::displayPassagerInfo() const {
		cout << "Passanger " << getFirstName() << ", " << getLastName() << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Date of Birth " << getDateOfBirth() << endl;
		cout << "Gender " << getGender() << endl;
		cout << "Nationality " << getNationality() << endl;
		cout << "Passport Number " << getPassportNo() << endl;
	}
}