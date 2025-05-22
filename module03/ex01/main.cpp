/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:48:05 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/22 12:20:43 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap bot("Wall-e");
	
	std::cout << std::endl;	
	bot.guardGate();
	std::cout << std::endl;
	
	std::cout << "ATACK" << std::endl;
	for (int i = 0; i <= 2; i++)
	bot.attack("Robocop");
	std::cout << std::endl;
	
	std::cout << "DEFENSE" << std::endl;
	for (int i = 0; i <= 2; i++)
	bot.takeDamage(10);
	std::cout << std::endl;

	std::cout << "REPAIR" << std::endl;
	for (int i = 0; i <= 2; i++)
			bot.beRepaired(20);
	std::cout << std::endl;
	
	return (0);
}