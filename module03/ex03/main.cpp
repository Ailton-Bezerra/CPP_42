/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:48:05 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/23 17:01:34 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "FragTrap.hpp"
// #include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	std::cout << "========== FRAGTRAP =========" << std::endl;
	FragTrap frog("Crazy frog");
	
	std::cout << std::endl;	
	frog.highFivesGuys();
	std::cout << std::endl;
	
	std::cout << "ATACK" << std::endl;
	for (int i = 0; i <= 2; i++)
	frog.attack("Robocop");
	std::cout << std::endl;
	
	std::cout << "DEFENSE" << std::endl;
	for (int i = 0; i <= 2; i++)
	frog.takeDamage(10);
	std::cout << std::endl;

	std::cout << "REPAIR" << std::endl;
	for (int i = 0; i <= 2; i++)
			frog.beRepaired(20);
	std::cout << std::endl;

	std::cout << "========== SCAVTRAP =========" << std::endl;
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
	
	std::cout << "========== DIAMONDTRAP =========" << std::endl;
	DiamondTrap poke("Diance");
	
	std::cout << std::endl;	
	poke.whoAmI();
	std::cout << std::endl;
	
	std::cout << "ATACK" << std::endl;
	for (int i = 0; i <= 2; i++)
	poke.attack("Robocop");
	std::cout << std::endl;
	
	std::cout << "DEFENSE" << std::endl;
	for (int i = 0; i <= 2; i++)
	poke.takeDamage(10);
	std::cout << std::endl;

	std::cout << "REPAIR" << std::endl;
	for (int i = 0; i <= 2; i++)
			poke.beRepaired(20);
	std::cout << std::endl;

	return (0);
}