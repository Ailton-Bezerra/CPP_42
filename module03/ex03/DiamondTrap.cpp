/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:11:54 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/16 18:20:20 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {
	this->_name = "unnamed";
	this->setAtttackDamge(FragTrap::getAtttackDamge());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setHitPoints(FragTrap::getHitPoints());
	
	std::cout << "Default DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->_name = name;
	
	this->setAtttackDamge(FragTrap::getAtttackDamge());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setHitPoints(FragTrap::getHitPoints());
	
	std::cout << "DiamondTrap " << this->_name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other) {}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
		if (this != &other) {
			std::string temp = this->getName();
			ClapTrap::operator=(other);
			std::cout << other.getName() << " atribuited to " << temp << std::endl;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void) {std::cout << "DiamondTrap " << this->_name << " destroyed" << std::endl;}

std::string DiamondTrap::getName(void) 			const {return this->_name;}

void DiamondTrap::whoAmI() {
	std::cout << "My DiamondTrap name is " << this->_name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::getName() << std::endl;
}
