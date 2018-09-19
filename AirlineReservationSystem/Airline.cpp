#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include "Airline.h"

using namespace std;

namespace AirlineReservationSystem {

	Airline::Airline(const std::string& departureLocation, const std::string& departureDate,
		const std::string& departureTime, const std::string& arrivalLocation,
		const std::string& arrivalDate, const std::string& arrivalTime)
		: mDepartureLocation(departureLocation), mAirlineDepartureDate(departureDate),
		mDepartureTime(departureTime), mArrivalLocation(arrivalLocation), mAirlineArrivalDate(arrivalDate),
		mArrivalTime(arrivalTime) {

	}
	const std::string& Airline::getAirlinePassenger(const std::string& firstName, const std::string& lastName,
		const std::string& dateOfBirth, const std::string& passportNo,
		const std::string& gender, const std::string& nationality) {
		return
			mFirstName, mLastName, mDateOfBirth,
			mPassportNo, mGender, mNationality;
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

	int Airline::getAirlinePrice() const {
		return mAirlinePrice;
	}

	void Airline::setAirlinePrice(int newAirlinePrice) {
		mAirlinePrice = newAirlinePrice;
	}

	void Airline::reserve() {
		mReserved = true;
	}
	void Airline::cancel() {
		mReserved = false;
	}

	void Airline::reservedFirstClass(int firstClassIncreaceAmount) {
		setAirlinePrice(getAirlinePrice() + firstClassIncreaceAmount);
	}
	void Airline::reservedEconomyClass() {
		setAirlinePrice(getAirlinePrice());
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

	void Airline::displayAirline() const {

		cout << "Airline " << getAirlineNo();
		cout << "Departure " << getDepartureLocation();
		cout << "Departure Date " << getDepartureDate();
		cout << "Departure Time " << getDepartureTime();
		cout << "Arrival " << getArrivalLocation();
		cout << "Arrival Date " << getArrivalDate();
		cout << "Arrival Time " << getArrivalTime();
	}

	void Airline::displayPassengerInfo() const {
		cout << "Passenger " << getFirstName() << ", " << getLastName() << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << (isReserved() ? "First Class " : "Economy Class ") << endl;
		cout << "Booking Number " << getBookingNumber() << endl;
		cout << "Airline Price " << getAirlinePrice() << endl;
		cout << "Date of Birth " << getDateOfBirth() << endl;
		cout << "Gender " << getGender() << endl;
		cout << "Nationality " << getNationality() << endl;
		cout << "Passport Number " << getPassportNo() << endl;
	}


	//void Airline::airlineSeats() const {
	//	//int price(int row, int col); // calculate ticket price
	//	bool isValid(int row, int seat);// is the seat at(row, seat) empty?
	//	char seats[NUM_ROWS + 1][NUM_COLS + 1];
	//	for (size_t row{ 1 }; row < NUM_ROWS + 1; ++row) {
	//		for (size_t col{ 1 }; col < NUM_COLS + 1; ++col) {
	//			seats[row][col] = EMPTY;
	//		}
	//	}
	//	displaySeatingChart(seats);
	//	int row = 0;
	//	char seat = 'A';
	//	char anotherSeat = 'y';
	//	vector<int> rowsWanted;
	//	vector<int> seatsWanted;
	//	while (anotherSeat == 'y') {

	//		cout << "What seat would you like? (row 1-15, seat 1-30) ";

	//		cin >> row >> seat;

	//		if (!isValid(row, seat)) {
	//			cout << "Please enter: row 1-60, seat A-E " << endl;
	//		}
	//		else if (seats[row][seat] == EMPTY) {
	//			rowsWanted.push_back(row);
	//			seatsWanted.push_back(seat);
	//			cout << row << ", " << seat << endl;
	//			seats[row][seat] = TAKEN;
	//			cout << "Another seat? (y/n): ";
	//			cin >> anotherSeat;
	//		}
	//		else {
	//			cout << "That seat is taken, try another seat." << endl;
	//			row = 0;
	//			seat = 'A';
	//		}
	//	}
	//	displaySeatingChart(seats);
	//	/*int totalCost = 0;
	//	for (size_t i{ 0 }; i < rowsWanted.size(); ++i) {
	//		totalCost += price(rowsWanted[i], seatsWanted[i]);
	//	}
	//	cout << "Total cost = " << totalCost << endl;*/
	//}


	//void Airline::displaySeatingChart(char seats[NUM_ROWS + 1][NUM_COLS + 1]) const {
	//	cout << "\tSeats" << endl;
	//	cout << "\t"
	//		<< setw(2) << 'L'
	//		<< setw(3) << 'R' << endl;
	//	cout << "\t";
	//	for (size_t i{ 1 }; i <= NUM_COLS; ++i) {
	//		cout << i % 5;
	//	}
	//	cout << endl;

	//	for (size_t i{ 1 }; i <= NUM_ROWS; ++i) {
	//		cout << "Row " << i << "\t";
	//		for (size_t j{ 1 }; j <= NUM_COLS; ++j) {
	//			cout << seats[i][j];
	//		}
	//		cout << endl;

	//	}
	//}

	//bool isValid(int row, int seat) {
	//	return 1 <= row && row <= NUM_ROWS
	//		&& 1 <= seat && seat <= NUM_COLS;
	//}
}

	/*Airline::UserInfo(const std::string& firstName, const std::string& lastName,
		const std::string& dateOfBirth, const std::string& passportNo,
		const std::string& gender, const std::string& nationality) : mFirstName(firstName), mLastName(lastName),
		mDateOfBirth(dateOfBirth), mPassportNo(passportNo), mGender(gender), mNationality(nationality) {

	}*/

	/*const std::string& getPassportExpiration() const;
	void setPassportExpiration()*/;

	/*void Airline::userTicketInformation(const std::string& firstName, const std::string& lastName) {

	}
	void Airline::userTicketInformation(int AirlineNumber, const std::string& departureLocation,
		const std::string& depatureDate, const std::string& departureTime,
		const std::string& arrivalLocation, const std::string& arrivalDate,
		const std::string& arrivalTime) {

	}*/

