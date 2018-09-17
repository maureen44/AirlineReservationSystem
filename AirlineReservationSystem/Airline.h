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