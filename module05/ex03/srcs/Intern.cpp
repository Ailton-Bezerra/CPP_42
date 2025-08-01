/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:11:12 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/01 14:28:27 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& other) { (void)other; }

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return (*this);
}
// ============================================================================

// ================================= METHODS ==================================
AForm* Intern::makeForm(const std::string name, const std::string target) {
	int					formIndex = -1;
	const std::string	validForms[] = {"presidential pardon", 
		"robotomy request", "shrubbery creation"};
	
	while (++formIndex < 3)
		if (name == validForms[formIndex])
			break;
	switch (formIndex) {
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Provided form name does not exist" << std::endl;	
			return (NULL);
	}
}
// ============================================================================