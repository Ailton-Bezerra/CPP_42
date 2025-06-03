/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:39:36 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/03 12:44:46 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

// ================== constructors and destructor (FOC) =======================
MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->slots[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < 4; i++) {
		if (other.slots[i])
			this->slots[i] = other.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	for (int i = 0; i < 3; i++) {
		if (this->slots[i])
			delete this->slots[i];
		if (other.slots[i])
			this->slots[i] = other.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++) {
		if (this->slots[i])
			delete this->slots[i];
	}
}
// ============================================================================

// ============================ methods =======================================
void		MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] == NULL) {
			this->slots[i] = materia;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] && this->slots[i]->getType() == type)
			return (this->slots[i]->clone());
	}
	return (NULL);
}
// ============================================================================
