#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include "Airline.h"

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

	int AirlinePassenger::getSeat() const {
		return mAirlineSeats;
	}
	void AirlinePassenger::setSeat(int seatNo) {

		mAirlineSeats = seatNo;
	}

	Airline::Airline(const std::string& departureLocation, const std::string& departureDate,
		const std::string& departureTime, const std::string& arrivalLocation,
		const std::string& arrivalDate, const std::string& arrivalTime,
		int airlineNo) {

	}

	const std::string& Airline::getAirlineNo() const {
		return mAirline;
	}
	void Airline::setAirlineNO(const std::string& airlineNo) {

	}

	const std::string& Airline::getDepartureLocation() const {
		return mDepartureLocation;
	}
	void Airline::setDepatureLocation(const std::string& departureLocation) {

	}

	const std::string& Airline::getDepartureDate() const {
		return mAirlineDepartureDate;
	}
	void Airline::setDepartureDate() {

	}

	const std::string& Airline::getDepartureTime() const {
		return mDepartureTime;
	}
	void Airline::setDepartureTime() {

	}

	const std::string& Airline::getArrivalLocation() const {
		return mArrivalLocation;
	}
	void Airline::setArrivalLocation(const std::string& arrivalLocation) {

	}

	const std::string& Airline::getArrivalDate() const {
		return mAirlineArrivalDate;
	}
	void Airline::setArrivaDate() {

	}

	const std::string& Airline::getArrivalTime() const {
		return mArrivalTime;
	}
	void Airline::setArrivalTime() {

	}
	
	int AirlinePassenger::getAirlinePrice() const {
		return mAirlinePrice;
	}

	void AirlinePassenger::setAirlinePrice(int newAirlinePrice) {
		mAirlinePrice = newAirlinePrice;
	}

	void AirlinePassenger::reserve() {
		mReserved = true;
	}
	void AirlinePassenger::cancel() {
		mReserved = false;
	}

	bool AirlinePassenger::isReserved() const {
		return mReserved;
	}
	
	//Passenger Info	
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
		cout << "Seat Number " << getSeat() << endl;
		/*cout << "Airline " << airline() << endl;*/
		cout << "Airline Price " << getAirlinePrice() << endl;
		cout << "Date of Birth " << getDateOfBirth() << endl;
		cout << "Gender " << getGender() << endl;
		cout << "Nationality " << getNationality() << endl;
		cout << "Passport Number " << getPassportNo() << endl;
	}

	void AirlinePassenger::displayBookingInfo() const {
		cout << "=====================================================================================================================" << endl;
		cout << "Passenger " << getFirstName() << ", " << getLastName() << endl;
		/*cout << "Airline " << airline() << endl;*/
		cout << "Booking Number " << getBookingNumber() << endl;
		cout << "Seat Number " << getSeat() << endl;		
		cout << "Airline Price " << getAirlinePrice() << endl;
	}

}

