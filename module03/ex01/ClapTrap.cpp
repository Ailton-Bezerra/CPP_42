/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:37:54 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/17 12:44:34 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	_name = "unnamed";
	_hitPoints = 10;
	_energyPoints = 10; 
	_attackDamage = 0;
	std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::~ClapTrap(void) {std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl;}

ClapTrap::ClapTrap(std::string name) : 
	_name(name), 
	_hitPoints(10),
	_energyPoints(10), 
	_attackDamage(0) {
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
	_name(other._name),
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

std::string	ClapTrap::getName(void)			const 	{return (this->_name);}
int			ClapTrap::getHitPoints(void)	const	{return (this->_hitPoints);}
int			ClapTrap::getEnergyPoints(void)	const	{return (this->_energyPoints);}
int 		ClapTrap::getAtttackDamge(void)	const	{return (this->_attackDamage);}

void		ClapTrap::setName(std::string name)		{this->_name = name;}
void		ClapTrap::setHitPoints(int hp)			{this->_hitPoints = hp;}
void		ClapTrap::setEnergyPoints(int ep)		{this->_energyPoints = ep;}
void		ClapTrap::setAtttackDamge(int ad)		{this->_attackDamage = ad;}

void ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy, nothing happens" << std::endl;
		return ;
	}
	if (this->_hitPoints) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target 
				<< " causing " << this->_attackDamage	<< " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " already defeated" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "ClapTrap " << this->_name << " receive " << amount << " points of damage" << std::endl;
	std::cout << "ClapTrap " << this->_name << " remaining HP: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy, nothing happens" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " used potion, ";
	if (this->_hitPoints == 100) {
		std::cout << "HP was already full, nothing happens" << std::endl;
		this->_energyPoints--;
		return ;
	}
	else if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " already defeated" << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
	this->_energyPoints--;
	std::cout << amount << " HP recovered!" << std::endl;
	std::cout << "ClapTrap " << this->_name << " remaining HP: " << this->_hitPoints << std::endl;
}
