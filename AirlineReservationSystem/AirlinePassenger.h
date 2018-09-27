#pragma once
#include <string>
#include <vector>

namespace AirlineReservationSystem {


	class AirlinePassenger {

	public:
		AirlinePassenger() = default;


		AirlinePassenger(const std::string& firstName, const std::string& lastName,
			const std::string& dateOfBirth, const std::string& passportNo,
			const std::string& gender, const std::string& nationality);

		int getBookingNumber() const;
		void setBookingNumber(int bookingNo);

		bool isReserved() const;

		void reserve();
		/*void cancel();*/

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

		bool mReserved = false;
		std::string mFirstName;
		std::string mLastName;
		std::string mDateOfBirth;
		std::string mPassportNo;
		std::string mGender;
		std::string mNationality;
		int mBookingNumber = 1000;


	};
}
	
//Application will present a menu system of choice to the user
//Reserve a seat
//Flight Schedule
//Display passenger info
//Flight details
//User ticket infomation
//Exit the program