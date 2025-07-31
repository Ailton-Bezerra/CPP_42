/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:11:12 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/31 16:37:52 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& other) {
	(void)other;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return (*this);
}
// ============================================================================

// ================================= METHODS ==================================
AForm* Intern::makeForm(const std::string name, const std::string target) {
	int					formIndex = -1;
	bool				isValid = false;
	const std::string	validForms[] = {"presidential pardon", 
		"robotomy request", "shrubbery creation"};
	
	while (++formIndex < 3) {
		if (name == validForms[formIndex]) {
			isValid = true;
			break;
		}
	}
	if (isValid)
		std::cout << "Intern creates " << name << std::endl;
	// {
	switch (formIndex) {
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		// default:
			// std::cout << "Provided form name does not exist" << std::endl;
		// }
	}
	std::cout << "Provided form name does not exist" << std::endl;
	return (NULL);
}
// ============================================================================