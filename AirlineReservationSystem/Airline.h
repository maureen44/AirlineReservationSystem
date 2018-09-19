#pragma once
#include <string>

namespace AirlineReservationSystem {

	const int NUM_ROWS = 60; // number of rows of seats in an airline
	const int NUM_COLS = 5; // number of seats in each row.
	const char EMPTY = '#'; // display symbol for empty seat.
	const char TAKEN = '*'; // display sysmbol for taken seat.

	class Airline {

	public:
		Airline() = default;
		Airline(const std::string& departureLocation, const std::string& departureDate,
			const std::string& departureTime, const std::string& arrivalLocation, 
			const std::string& arrivalDate, const std::string& arrivalTime);
		const std::string& getAirlinePassenger(const std::string& firstName, const std::string& lastName,
			const std::string& dateOfBirth, const std::string& passportNo,
			const std::string& gender, const std::string& nationality);

		int getAirlineNo() const;
		void setAirlineNO(int airlineNo);
		
		int getAirlineSeats() const;
		void setAirlineSeats(int numberOfSeats);

		const std::string& getDepartureLocation() const;
		void setDepatureLocation(const std::string& departureLocation);

		const std::string& getDepartureDate() const;
		void setDepatureDate(const std::string& departureDate);

		const std::string& getDepartureTime() const;
		void setDepatureTime(const std::string& departureTime);
			   		 
		const std::string& getArrivalLocation() const;
		void setArrivalLocation(const std::string& arrivalLocation);

		const std::string& getArrivalDate() const;
		void setArrivalDate(const std::string& arrivalDate);

		const std::string& getArrivalTime() const;
		void setArrivalTime(const std::string& arrivalTime);

		bool isReserved() const;

		int getSeatNumber() const;
		void setSeatNumber(int seatNo);

		int getAirlinePrice() const;

		void setAirlinePrice(int newAirlinePrice);
		
		void reserve();
		void cancel();
		void reservedFirstClass(int firstClassIncreaceAmount = 25);
		void reservedEconomyClass();
		
		void displayAirline() const;
		
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

		int getBookingNumber() const;
		void setBookingNumber(int bookingNo);
		
		void displayPassengerInfo() const;

		/*void airlineSeats() const;

		void displaySeatingChart(char seats[NUM_ROWS + 1][NUM_COLS + 1]) const;
*/
	private:		
		/*std::string mMenu = displayMenu();
		std::string mSchedule;*/
		int mAirlineNumber = 200;
		bool mReserved = false;
		int mAirlineNumberOfSeats = 300;
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

	/*const std::string& getPassportExpiration() const;
		void setPassportExpiration()*/;

		/*void userTicketInformation(const std::string& firstName, const std::string& lastName);*/

		/*void userTicketInformation(int AirlineNumber, const std::string& departureLocation,
			const std::string& depatureDate, const std::string& departureTime,
			const std::string& arrivalLocation, const std::string& arrivalDate,
			const std::string& arrivalTime);*/

}

//Application will present a menu system of choice to the user
//Reserve a seat
//Flight Schedule
//Display passenger info
//Flight details
//User ticket infomation
//Exit the program