/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:07:02 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/23 16:29:30 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	this->setAtttackDamge(30);
	this->setEnergyPoints(100);
	this->setHitPoints(100);
	std::cout << "Default FragTrap created" << std::endl;
}
FragTrap::~FragTrap(void) {std::cout << "FragTrap " << getName() << " destroyed" << std::endl;}
		
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
		this->setAtttackDamge(30);
		this->setEnergyPoints(100);
		this->setHitPoints(100);
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {}
		
FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		std::string temp = this->getName();
		ClapTrap::operator=(other);
		std::cout << other.getName() << " atribuited to " << temp << std::endl;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Fragtrap " << getName() << " send positive high-fives!" << std::endl;
}
