/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:29:26 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 20:17:04 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45, "unknown") {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): 
	AForm("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm(other) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}
// ============================================================================

#include <cstdlib>
// ================================= METHODS ==================================
void	RobotomyRequestForm::executeAction() const {
	std::cout << "Makes some drilling noises..." << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "robotomy on " << this->getTarget() << " has failed" << std::endl; 
}
// ============================================================================