#pragma once
#include <string>

namespace AirlineReservationSystem {

	class Airline {

	public:
		Airline();
		Airline(const std::string& menu, const std::string& schedule);

		int getSeatNumber() const;
		void setSeatNumber(int seatNumber);

		const std::string& getMenu() const;
		void setMenu(const std::string& menu);

		bool isReserved() const;

		const std::string& getSchedule() const;
		void setSchedule(const std::string& schedule);

		const std::string& getUserTicketInfo() const;
		void setUserTicketInfo(const std::string& userInfo);

		const std::string& getFirstName() const;
		void setFirstName(const std::string& firstName);

		const std::string& getLastName() const;
		void setLastName(const std::string& lastName);

		const std::string& getDepartureLocation() const;
		void setDepatureLocation(const std::string& departureLocation);

		const std::string& getArrivalLocation() const;
		void setArrivalLocation(const std::string& arrivalLocation);

		//const getDateOfBirth() const;
		//void setDateOfBirth();

		//const getDepartureTime() const;
		//void setDepartureTime();

		//const getArrivalTime() const;
		//void setArrivalTime();

		void reserved();
		void notReserved();
		void userTicketInformation(const std::string& firstName, const std::string& lastName, 
			const std::string& departureLocation, const std::string& arrivalLocation
			);
		void displayPassagerInfo() const;

		//Passenger Information:
		const std::string& getNationality() const;
		void setNationality(const std::string& nationality);

		const std::string& getGender() const;
		void setGender(const std::string& gender);

		int getPassportNo() const;
		void setPassportNo(int passportNo);

		//const getPassportExpiration() const;
		//void setPassportExpiration();

		//Flight Schedule
		const std::string& getAirline() const;
		void setAirline(const std::string& airline);


	private:
		std::string mFirstName;
		std::string mLastName;
		std::string fMenu;
		std::string fSchedule;
		bool isReserved = false;
		int fSeatNumber = -1;


	};
}

//Application will present a menu system of choice to the user
//Reserve a seat
//Flight Schedule
//Display passenger info
//Flight details
//User ticket infomation
//Exit the program