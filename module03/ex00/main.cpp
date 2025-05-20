/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:48:05 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/20 16:37:40 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void) {
	ClapTrap Bob("Sponge Bob");
	ClapTrap Cop("Robocop");
	ClapTrap Jimmy("Jimmy Neutron");
	
	
	std::cout << std::endl;	
	std::cout << "ATACK" << std::endl;
	for (int i = 0; i <= 10; i++)
	Bob.attack("Robocop");
	std::cout << std::endl;
	
	std::cout << "DEFENSE" << std::endl;
	for (int i = 0; i <= 10; i++)
	Cop.takeDamage(1);
	std::cout << std::endl;
	
	// Jimmy = Bob;
	std::cout << "REPAIR" << std::endl;
	Jimmy.takeDamage(9);
	for (int i = 0; i <= 10; i++)
			Jimmy.beRepaired(2);
	std::cout << std::endl;
	
	// ClapTrap ScoobyDoo = Bob;
	// std::cout << "REPAIR" << std::endl;
	// ScoobyDoo.takeDamage(9);
	// for (int i = 0; i <= 10; i++)
	// 		ScoobyDoo.beRepaired(2);
	// std::cout << std::endl;
	
	return (0);
}