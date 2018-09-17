#pragma once
#include <string>

namespace AirlineReservationSystem {

	class Airline 
{

	public:
		Airline() = default;
		Airline(const std::string& departureLocation, const std::string& departureDate, 
			const std::string& departureTime, const std::string& arrivalLocation, 
			const std::string& arrivalDate, const std::string& arrivalTime,
			int airlineNo);

		const std::string& getAirlineNo() const;
		void setAirlineNO(const std::string& airlineNo);
		
		const std::string& getAirlineSeats() const;
		void setAirlineSeats(const std::string& menu);

		const std::string& getDepartureLocation() const;
		void setDepatureLocation(const std::string& departureLocation);

		const std::string& getArrivalLocation() const;
		void setArrivalLocation(const std::string& arrivalLocation);

		bool isReserved() const;

		int getAirlineNumberOfSeats() const;
		void setAirlineNumberOfSeats(int numberOfSeats);

		/*const std::string& getSchedule() const;
		void setSchedule(const std::string& schedule);

		const std::string& getUserTicketInfo() const;
		void setUserTicketInfo(const std::string& userInfo);

		*/

		//const getDateOfBirth() const;
		//void setDateOfBirth();

		//const getDepartureTime() const;
		//void setDepartureTime();

		//const getArrivalTime() const;
		//void setArrivalTime();

		void reserved();
		void notReserved();
		
		void displayAirline() const;
		
		


	private:		
		/*std::string mMenu = displayMenu();
		std::string mSchedule;*/
		int mAirlineNumber;
		bool mReserved = false;
		int mAirlineNumberOfSeats;
		int mSeatNumber = 1;
		std::string mDepartureLocation;
		std::string mAirlineDepartureDate;
		std::string mDepartureTime;
		std::string mArrivalLocation;		
		std::string mAirlineArrivalDate;
		std::string mArrivalTime;


	};

	Airline::Airline()
	{

	}
}

//Application will present a menu system of choice to the user
//Reserve a seat
//Flight Schedule
//Display passenger info
//Flight details
//User ticket infomation
//Exit the program