#include "pch.cpp"
#include <iostream>
#include <stdexcept>
#include "PassengerDB.h"

using namespace std;
using namespace AirlineReservationSystem;

namespace AirlinePassengers
{

	Airline& PassengerDB::addPassenger(const string& firstName,
		const string& lastName, const string& passportNo, const string& gender, const string& nationality, const string& dateOfBirth)
	{
		Airline thePassenger(firstName, lastName, passportNo, gender, nationality, dateOfBirth);
		thePassenger.setBookingNumber(mNextBookingNumber++);
		thePassenger.reserve();
		mPassengers.push_back(thePassenger);

		return mPassengers[mPassengers.size() - 1];
	}

	Airline& PassengerDB::getBookingInfo(int bookingNumber) //pull from PassengerDB or AirlineDB? 
	{
		for (auto& passenger : mPassengers) {
			if (passenger.getBookingNumber() == bookingNumber) {
				return bookingInfo; 
			}
		}
		throw logic_error("No Booking Information found.");
	}

	Airline& PassengerDB::getBookingInfo(const string& firstName, const string& lastName) //pull from PassengerDB or Airline DB?
	{
		for (auto& passenger : mPassengers) {
			if (passenger.getFirstName() == firstName &&
				passenger.getLastName() == lastName) {
				return bookingInfo;
			}
		}
		throw logic_error("No Booking Information found.");
	}

	void PassengerDB::displayPassengerInfo() const
	{
		for (const auto& passenger : mPassengers) {
			passenger.display();
		}
	}

	//Ideas for displaying flight details: To be placed in this database or the flight database?

	//void Database::displayFlightA() const //another option to display passenger list from flight A (flight details)?
	//{
	//	for (const auto& passenger : mPassengers) {
	//		if (passenger.flightA())
	//			passenger.display();
	//	}
	//}
	
	//void Database::displayFlightB() const //another option to display passenger list from flight B (flight details)?
	//{
	//	for (const auto& passenger : mPassengers) {
	//		if (passenger.flightB())
	//			passenger.display();
	//	}
	//}
	
	
	
	

}