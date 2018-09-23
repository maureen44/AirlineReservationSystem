#pragma once
#include <string>
#include <vector>

namespace AirlineReservationSystem {

	const std::vector<std::string> HEADING = { "No. Airline Departure DepartureDate DepartureTime Arrival ArrivalDate ArrivalTime" };
	const std::vector<int> AIRLINE_NUMBER = { 1, 2, 3, 4, 5, 6 };
	const std::vector<std::string> AIRLINE_DETAILS = { "Alaska Seattle 09/20/2018 11AM Phoenix 09/20/2018 8PM",
	"United Detroit 09/20/2018 10AM Phoenix 309/20/2018 6 PM",
	"Spirit Seattle 09/20/2018 9AM Chicago 09/20/2018 8 PM",
	"Delta Chicago 09/20/2018 11AM Phoenix 09/20/2018 5PM",
	"American Houston 09/20/2018 10AM Seattle 09/20/2018 8PM",
	"JetBlue Seattle 09/20/2018 9AM Indianapolis 09/20/2018 10PM"  };
	/*const std::vector<std::string> AIRLINE_ARRIVAL = {" Phoenix 09/20/2018 8PM",
	" Phoenix 309/20/2018 6 PM",
	" Chicago 09/20/2018 8 PM",
	" Phoenix 09/20/2018 5PM",
	" Seattle 09/20/2018 8PM",
	" Indianapolis 09/20/2018 10PM"};*/

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

		void displayBookingInfo() const;
		
		void displayPassengerInfo() const;

	private:
		
		bool mReserved = false;
		int mAirlineSeats = 300;
		int mSeatNumber = 1;
		
		std::string mFirstName;
		std::string mLastName;
		std::string mDateOfBirth;
		std::string mPassportNo;
		std::string mGender;
		std::string mNationality;
		int mBookingNumber = 1000;
		int mAirlinePrice = 500;


	};

	class Airline {
	public:
		Airline();
		Airline(const std::string& departureLocation, const std::string& departureDate,
			const std::string& departureTime, const std::string& arrivalLocation,
			const std::string& arrivalDate, const std::string& arrivalTime,
			int airlineNo);

		const std::string& getAirlineNo() const;
		void setAirlineNO(const std::string& airlineNo);

		const std::string& getDepartureLocation() const;
		void setDepatureLocation(const std::string& departureLocation);

		const std::string& getDepartureDate() const;
		void setDepartureDate();

		const std::string& getDepartureTime() const;
		void setDepartureTime();
		
		const std::string& getArrivalLocation() const;
		void setArrivalLocation(const std::string& arrivalLocation);

		const std::string& getArrivalDate() const;
		void setArrivaDate();

		const std::string& getArrivalTime() const;
		void setArrivalTime();

	private:
		std::string mAirline;
		std::string mDepartureLocation;
		std::string mAirlineDepartureDate;
		std::string mDepartureTime;
		std::string mArrivalLocation;
		std::string mAirlineArrivalDate;
		std::string mArrivalTime;
	};

}

//Application will present a menu system of choice to the user
//Reserve a seat
//Flight Schedule
//Display passenger info
//Flight details
//User ticket infomation
//Exit the program