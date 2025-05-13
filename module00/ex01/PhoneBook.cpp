/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:38:00 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/07 17:38:53 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"
#include "includes/resources.hpp"

PhoneBook::PhoneBook () {
	index = 0;
	contact_num = 0;
}

std::string	GetInput (std::string info){
	std::string input;

	std::cout << CYAN << info << RESET;
	while (1) {
		std::getline(std::cin, input);
		if (!std::cin.good()){
			std::cout << "\n" EXITING << std::endl;
			exit(0);
		}
		if (input.empty()) {
			std::cout << RED "\nField must not be empty" RESET << std::endl;
			std::cout << CYAN << info << RESET;
		}
		else
			break ;
	}
	return (input);
}

void	PhoneBook::AddContact() {
		contacts[index].SetFirstName(GetInput("First name: "));
		contacts[index].SetLastName(GetInput("Last name: "));
		contacts[index].SetNickname(GetInput("Nickname: "));
		contacts[index].SetPhoneNumber(GetInput("Phone number: "));
		contacts[index].SetDarkestSecret(GetInput("Darkest secret: "));
		
		index = (index + 1) % 8;
		if (contact_num < 8)
			contact_num++;
}


std::string cut(std::string input) {
	if (input.size() > 10)
		return (input.substr(0, 9) + ".");
	return (input);
}

int getindex(){
	std::string input;
	int index;
	
	while (1) {
		std::cout << "\nDigit contact index (1-8)" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << "\n" EXITING << std::endl;
			exit(0);
		}
		std::stringstream ss(input);
		ss >> index;
		if (ss.fail())
			continue;
		if (index > 0 && index < 8)
			return (index - 1);
		std::cout << RED " invalid index!" RESET << std::endl;
	}
}

void PhoneBook::SearchContact(void)
{
	std::cout << std::setw(11) << "INDEX|";
	std::cout << std::setw(11) << "FIRST NAME|";
	std::cout << std::setw(11) << "LAST NAME|";
	std::cout << std::setw(11) << "NICKNAME|";
	std::cout << std::endl;
	
	for(int i = 0; i < contact_num; i++) {
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(11) << cut(contacts[i].GetFirstName()) + "|";
		std::cout << std::setw(11) << cut(contacts[i].GetLastName()) + "|";;
		std::cout << std::setw(11) << cut(contacts[i].GetNickname()) + "|";
		std::cout << std::endl;
	}
	
	int i = getindex();
	if (contacts[i].GetFirstName().empty())
		std::cout << "Contatc " << i << "is empty" << std::endl;
	else {
		std::cout << std::endl;
		std::cout << FN << contacts[i].GetFirstName() << std::endl;
		std::cout << LN << contacts[i].GetLastName() << std::endl;
		std::cout << NN << contacts[i].GetNickname() << std::endl;
		std::cout << PN << contacts[i].GetPhoneNumber() << std::endl;
		std::cout << DS << contacts[i].GetDarkestSecret() << std::endl;
	}	
}
