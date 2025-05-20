/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:37:54 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/20 16:42:26 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints (10),
									_energyPoints(10), _attackDamage(0) {
	std::cout << name << " created" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << this->_name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	:	_name(other._name),
		_hitPoints(other._hitPoints),
		_energyPoints(other._energyPoints),
		_attackDamage(other._attackDamage) {
		std::cout << other._name << " copied" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		std::string temp = this->_name;
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		std::cout << other._name << " atribuited to " << temp << std::endl;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints == 0) {
		std::cout << this->_name << " has no energy, nothing happens" << std::endl;
		return ;
	}
	if (this->_hitPoints) {
		std::cout << this->_name << " attacks " << target 
				<< " causing " << this->_attackDamage	<< " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " already defeated" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << this->_name << " receive " << amount << " points of damage" << std::endl;
	std::cout << this->_name << " remaining HP: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints == 0) {
		std::cout << this->_name << " has no energy, nothing happens" << std::endl;
		return ;
	}
	std::cout << this->_name << " used potion, ";
	if (this->_hitPoints == 10) {
		std::cout << "HP was already full, nothing happens" << std::endl;
		this->_energyPoints--;
		return ;
	}
	else if (this->_hitPoints == 0) {
		std::cout << this->_name << " already defeated" << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	if (this->_hitPoints > 10)
		this->_hitPoints = 10;
	this->_energyPoints--;
	std::cout << amount << " HP recovered!" << std::endl;
	std::cout << this->_name << " remaining HP: " << this->_hitPoints << std::endl;
}
