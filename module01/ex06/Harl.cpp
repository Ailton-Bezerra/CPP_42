/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:48:15 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/15 12:36:07 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*logs[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	int i;
	
	for (i = 0; i < 4; i++) {
		if (levels[i] == level)
			break ;
	}
	
	switch (i) {
		case 0:
			(this->*logs[0])();
		case 1:
			(this->*logs[1])();
		case 2:
			(this->*logs[2])();
		case 3:
			(this->*logs[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" 
					<< std::endl;
		
	}
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my"\
				"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			<< std::endl << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."\
				"You didn't put enough bacon in my burger! If you did,"\
				"I wouldn't be asking for more!"
			<< std::endl << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."\
				"I've been coming for years whereas you started working" \
				"here since last month."
			<< std::endl << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
			<< std::endl << std::endl;
}
