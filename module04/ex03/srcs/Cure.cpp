/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:38:26 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/03 13:13:07 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

// ================== constructors and destructor (FOC) =======================
Cure::Cure(void) { this->_type = "cure"; }

Cure::Cure(const Cure& other) { this->_type = other._type; }

const Cure& Cure::operator=(const Cure& other) {
	(void)other;
	return (*this);
}

Cure::~Cure(void) {}
// ============================================================================

// ============================ methods =======================================
Cure*	Cure::clone(void) const { return (new Cure()); }

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
// ============================================================================
