/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:11:12 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/01 17:30:37 by ailbezer         ###   ########.fr       */
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
AForm* Intern::makeForm(const std::string& name, const std::string& target) {
	const std::string	validForms[] = {
		"presidential pardon", 
		"robotomy request", 
		"shrubbery creation"};
	AForm* (Intern::* createForm[3])(const std::string&) ={
		&Intern::_createPresidentialForm,
		&Intern::_createRobotomyForm,
		&Intern::_createShrubberyForm
	};
	
	for (int i = 0; i < 3; i++) {
		if (validForms[i] == name) {
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*createForm[i])(target));
		}
	}
	std::cout << "Provided form name does not exist" << std::endl;
	throw NotFoundException();
}

AForm* Intern::_createPresidentialForm(const std::string& target) {
	return (new PresidentialPardonForm(target));
}

AForm* Intern::_createRobotomyForm(const std::string& target) {
	return (new RobotomyRequestForm(target));
}

AForm* Intern::_createShrubberyForm(const std::string& target) {
	return (new ShrubberyCreationForm(target));
}
// ============================================================================

// ============================== EXCEPTION ===================================
const char* Intern::NotFoundException::what() const throw() {
	return ("Invalid form name");
}
// ============================================================================
