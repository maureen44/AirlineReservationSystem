#pragma once
#include <string>
#include <vector>

namespace AirlineReservationSystem {

	const std::vector<std::string> HEADING = { "No. Airline Departure DepartureDate DepartureTime Arrival ArrivalDate ArrivalTime" };
	const std::vector<int> AIRLINE_NUMBER = { 1, 2, 3, 4, 5, 6 };
	const std::vector<std::string> AIRLINE_DETAILS = { "  Alaska  Seattle    09/20/2018    11AM    Phoenix    09/20/2018    8PM",
	"  United  Detroit    09/20/2018    10AM    Phoenix    09/20/2018    6PM",
	"  Spirit  Seattle    09/20/2018     9AM    Chicago    09/20/2018    8PM",
	"  Delta   Chicago    09/20/2018    11AM    Phoenix    09/20/2018    5PM",
	"  American Houston   09/20/2018    10AM    Seattle    09/20/2018    8PM",
	"  JetBlue  Seattle   09/20/2018     9AM    Indianapolis 09/20/2018  10PM" };	

	class AirlineFlight {
	public:
		AirlineFlight() = default;
		AirlineFlight(std::string& airCarier, std::string& departureLocation, std::string& departureDate,
			std::string& departureTime, std::string& arrivalLocation, 
			std::string& arrivalDate, std::string& arrivalTime, int seat, std::string& departureTerminal, std::string& arrivalTerminal);

		int getSeatNumber() const;
		void setSeatNumber(int seat);

		int getAirlinePrice() const;

		void setAirlinePrice(int newAirlinePrice);

		const std::string& getAirline() const;
		void setAirline(std::string& airline);

		const std::string& getDepartureLocation() const;
		void setDepatureLocation(std::string& departureLocation);

		const std::string& getDepartureDate() const;
		void setDepartureDate(std::string& departureDate);

		const std::string& getDepartureTime() const;
		void setDepartureTime(std::string& departureTime);

		const std::string& getArrivalLocation() const;
		void setArrivalLocation(std::string& arrivalLocation);

		const std::string& getArrivalDate() const;
		void setArrivaDate(std::string& arrivalDate);

		const std::string& getArrivalTime() const;
		void setArrivalTime(std::string& arrivalTime);

		const std::string& getArrivalTerminal() const;
		void setArrivalTerminal(std::string& arrivalTerminal);

		const std::string& getDepartureTerminal() const;
		void setDepartureTerminal(std::string& departureTerminal);

		bool isBooked() const;

		void book();

		void displayBookingInfo() const;

		void displayFlightDetails() const;

		void ticket() const;

	private:
		bool mBooked = false;
		int mAirlineSeats = 300;
		int mSeatNumber;
		int mAirlinePrice = 500;
		std::string mAirline;
		std::string mDepartureLocation;
		std::string mAirlineDepartureDate;
		std::string mDepartureTime;
		std::string mArrivalLocation;
		std::string mAirlineArrivalDate;
		std::string mArrivalTime;
		std::string mDepartureTerminal;
		std::string mArrivalTerminal;
	};

}

