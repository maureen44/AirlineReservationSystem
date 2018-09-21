#pragma once
#include <string>

namespace AirlineReservationSystem {

	const char HEADING[1][120] = { "Airline     Departure     DepartureDate     DepartureTime     Arrival     ArrivalDate     ArrivalTime " };

	const char AIRLINE_DEPARTURE[6][100] = { "1.Alaska     Seattle        09/20/2018         11 AM     ",
								   "2.United     Detroit        09/20/2018         10 AM     ",
								   "3.Spirit     Seattle        09/20/2018         9 AM     ",
								   "4.Delta      Chicago        09/20/2018         11 AM     ",
								   "5.American   Houston        09/20/2018         10 AM     ",
								   "6.JetBlue    Seattle        09/20/2018         9 AM     " };
	const char AIRLINE_ARRIVAL[6][100] = { "       Phoenix         09/20/2018     8 PM",
										  "       Phoenix         309/20/2018     6 PM ",
										  "        Chicago         09/20/2018     8 PM ",
										  "       Phoenix         09/20/2018     5 PM ",
										  "       Seattle         09/20/2018     8 PM",
										  "        Indianapolis    09/20/2018     10 PM " };

	class AirlinePassenger {
		
	public:
		AirlinePassenger() = default;
		

		AirlinePassenger(const std::string& firstName, const std::string& lastName,
			const std::string& dateOfBirth, const std::string& passportNo,
			const std::string& gender, const std::string& nationality);

		int getBookingNumber() const;
		void setBookingNumber(int bookingNo);
		
		int getSeat() const;
		void setSeat(int seatNO);	

		const char getAirline() const;
		void setAirline(char availableAirline);

		int getAirlinePrice() const;

		void setAirlinePrice(int newAirlinePrice);

		bool isReserved() const;

		void reserve();
		void cancel();	
		
		//Passenger Info

		const std::string& getFirstName() const;
		void setFirstName(const std::string& firstName);

		const std::string& getLastName() const;
		void setLastName(const std::string& lastName);

		const std::string& getDateOfBirth() const;
		void setDateOfBirth(const std::string& dateOfBirth);

		const std::string& getPassportNo() const;
		void setPassportNo(const std::string& passportNo);

		const std::string& getGender() const;
		void setGender(const std::string& gender);

		const std::string& getNationality() const;
		void setNationality(const std::string& nationality);		
		
		void displayPassengerInfo() const;

	private:
		int mAirline;
		bool mReserved = false;
		int mAirlineSeats = 300;
		int mSeatNumber = 1;
		std::string mDepartureLocation;
		std::string mAirlineDepartureDate;
		std::string mDepartureTime;
		std::string mArrivalLocation;		
		std::string mAirlineArrivalDate;
		std::string mArrivalTime;
		std::string mFirstName;
		std::string mLastName;
		std::string mDateOfBirth;
		std::string mPassportNo;
		std::string mGender;
		std::string mNationality;
		int mBookingNumber = 1000;
		int mAirlinePrice = 500;


	};

}

//Application will present a menu system of choice to the user
//Reserve a seat
//Flight Schedule
//Display passenger info
//Flight details
//User ticket infomation
//Exit the program