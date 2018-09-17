#pragma once
#pragma once
#include <string>

namespace AirlineReservationSystem {

	class UserInfo {

	public:
		UserInfo() = default;
		UserInfo(const std::string& firstName, const std::string& lastName);

		const std::string& getFirstName() const;
		void setFirstName(const std::string& firstName);

		const std::string& getLastName() const;
		void setLastName(const std::string& lastName);

		const std::string& getDateOfBirth() const;
		void setDateOfBirth(const std::string& dateOfBirth);

		int getPassportNo() const;
		void setPassportNo(int passportNo);

		const std::string& getGender() const;
		void setGender(const std::string& gender);

		const std::string& getNationality() const;
		void setNationality(const std::string& nationality);

		/*const std::string& getPassportExpiration() const;
		void setPassportExpiration()*/;

		void userTicketInformation(const std::string& firstName, const std::string& lastName,
			const std::string& departureLocation, const std::string& arrivalLocation
		);
		void displayPassagerInfo() const;

	private:
		std::string mFirstName;
		std::string mLastName;
		std::string mDateOfBirth;
		std::string mPassportNo;
		std::string mGender;
		std::string mNationality;
		int bookingNumber = 111000;

	};
}