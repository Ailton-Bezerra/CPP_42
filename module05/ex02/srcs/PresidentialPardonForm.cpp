/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:28:27 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/01 17:47:21 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5, "unknown") {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): 
	AForm("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm(other) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}
// ============================================================================

// ================================= METHODS ==================================
void	PresidentialPardonForm::executeAction() const {
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
// ============================================================================
