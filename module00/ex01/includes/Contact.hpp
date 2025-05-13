/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:36:12 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/07 17:46:54 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "resources.hpp"

class Contact {
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;

	public:
		void SetFirstName(std::string fn);
		void SetLastName(std::string ln);
		void SetNickname(std::string nick);
		void SetPhoneNumber(std::string pn);
	 	void SetDarkestSecret(std::string ds);

		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickname();
		std::string GetPhoneNumber();
		std::string GetDarkestSecret();
};

#endif