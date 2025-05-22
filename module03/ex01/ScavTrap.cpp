/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:17:16 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/22 12:11:22 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	this->setEnergyPoints(50);
	this->setHitPoints(100);
	this->setAtttackDamge(20);
	
	std::cout << "default ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	this->setEnergyPoints(50);
	this->setHitPoints(100);
	this->setAtttackDamge(20);
	
	std::cout << "ScavTrap " << this->getName() << " created" << std::endl;
}

ScavTrap::~ScavTrap(void) { 
	std::cout << "ScavTrap " << this->getName() << " destroyed" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap "  << this->getName() << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	int ep = this->getEnergyPoints();
	
	if (ep == 0) {
		std::cout << "ScavTrap " << this->getName() << " has no energy, nothing happens" << std::endl;
		return ;
	}
	if (this->getHitPoints()) {
		std::cout << "ScavTrap " <<this->getName() << " attacks " << target 
				<< " causing " << this->getAtttackDamge() << " points of damage!" << std::endl;
		this->setEnergyPoints(ep - 1);
		std::cout << "energy points: " << ep - 1 << std::endl;
	}
}
