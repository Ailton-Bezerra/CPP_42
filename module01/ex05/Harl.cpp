/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:48:15 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/15 11:46:41 by ailbezer         ###   ########.fr       */
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

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*logs[i])();
			return ;
		}
	}
	std::cout << "invalid level" << std::endl;
}

void Harl::debug(void) {
	std::cout 
	<< "I love having extra bacon for my"\
		"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void Harl::info(void) {
	std::cout
			<< "I cannot believe adding extra bacon costs more money."\
				"You didn't put enough bacon in my burger! If you did,"\
				"I wouldn't be asking for more!"
			<< std::endl;
}

void Harl::warning(void) {
	std::cout
			<< "I think I deserve to have some extra bacon for free."\
				"I've been coming for years whereas you started working" \
				"here since last month."
			<< std::endl;
}

void Harl::error(void) {
	std::cout
			<< "This is unacceptable! I want to speak to the manager now."
			<< std::endl;
}
