/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:31:49 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/03 12:48:51 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

// ================== constructors and destructor (FOC) =======================
Ice::Ice(void) { this->_type = "ice"; }

Ice::Ice(const Ice& other) { this->_type = other._type; }

const Ice& Ice::operator=(const Ice& other) {
	if (this != &other) {
		this->_type = other._type;
		*this = other;
	}
	return (*this);
}

Ice::~Ice(void) {}
// ============================================================================

// ============================ methods =======================================
Ice*	Ice::clone(void) const { return (new Ice()); }

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<<std::endl;
}
// ============================================================================
