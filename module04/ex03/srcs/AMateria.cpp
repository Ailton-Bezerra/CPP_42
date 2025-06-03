/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:05:34 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/03 13:12:48 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

// ================== constructors and destructor (FOC) =======================
AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) { this->_type = type; }

AMateria::AMateria(const AMateria& other) { this->_type = other._type; }

const AMateria&	AMateria::operator=(const AMateria& other) {
	(void)other;
	return (*this); 
}

AMateria::~AMateria(void) {}
//=============================================================================

// ============================ methods =======================================
std::string const & AMateria::getType(void) const { return (this->_type); }

void		AMateria::use(ICharacter& target) {(void)target;}
//=============================================================================
