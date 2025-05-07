/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:48:19 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/07 16:16:13 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::SetFirstName(std::string fn) {
	FirstName = fn;
}

void	Contact::SetLastName(std::string ln) {
	LastName = ln;
}

void	Contact::SetNickname(std::string nick) {
	Nickname = nick;
}

void	Contact::SetPhoneNumber(std::string pn) {
	PhoneNumber = pn;
}

void	Contact::SetDarkestSecret(std::string ds) {
	DarkestSecret = ds;
}

std::string	Contact::GetFirstName() {
	return (FirstName);
}

std::string	Contact::GetLastName() {
	return (LastName);
}

std::string Contact::GetNickname() {
	return (Nickname);
}

std::string Contact::GetPhoneNumber() {
	return (PhoneNumber);
}

std::string Contact::GetDarkestSecret() {
	return (DarkestSecret);
}
