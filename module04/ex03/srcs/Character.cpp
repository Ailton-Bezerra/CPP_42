/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:07:07 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/03 12:47:51 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

// ================== constructors and destructor (FOC) =======================
Character::Character() : ICharacter() {
	this->_name = "unnamed";
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const std::string name) : ICharacter(), _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character& other) {
	for (int i = 0; i < 4; i++) {
		if (other._inventory[i]) {
			this->_inventory[i] = other._inventory[i]->clone();
		}
		else
			this->_inventory[i] = NULL;
	}
	this->_name = other._name;
}

const Character& Character::operator=(const Character& other) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = other._name;
	return (*this);
}

Character::~Character(){
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
		}
	}
};
//=============================================================================

// ============================ methods =======================================
std::string const &	Character::getName() const {
	return (this->_name);
}

void				Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			break;
		}
	}
}

void 				Character::unequip(int idx) {
	this->_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target) {
	if (this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
}
//=============================================================================