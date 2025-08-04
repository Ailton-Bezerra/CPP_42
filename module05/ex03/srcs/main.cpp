// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/07/30 17:35:14 by ailbezer          #+#    #+#             */
// /*   Updated: 2025/07/31 16:47:20 by ailbezer         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"

void printHeader(const std::string& title) {
	std::cout << MAGENTA << "========== " << title << " ==========" << RESET << std::endl;
}

int main() {
	try {
		printHeader("Intern Tests");

		Intern someRandomIntern;
		AForm* rrf;

		std::cout << CYAN << "\nTesting RobotomyRequestForm with Intern" << RESET << std::endl;
		try {
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			delete rrf;
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}
		
		std::cout << CYAN << "\nTesting PresidentialPardonForm with Intern" << RESET << std::endl;
		try {
			rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
			delete rrf;
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}
		
		std::cout << CYAN << "\nTesting ShrubberyCreationForm with Intern" << RESET << std::endl;
		try {
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
			delete rrf;
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

		std::cout << CYAN << "\nTesting invalid form name" << RESET << std::endl;
		try {
			rrf = someRandomIntern.makeForm("random form", "Bender");
			delete rrf;
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

		printHeader("Form Execution Tests");

		Bureaucrat bob("Bob", 1);
		std::cout << GREEN << "\nCreated Bureaucrat: " << bob << RESET << std::endl;

		// ShrubberyCreationForm - Bob
		std::cout << CYAN << "\nTesting ShrubberyCreationForm with Bob (grade 1):" << RESET << std::endl;
		try {
			ShrubberyCreationForm shrubbery("home");
			bob.signForm(shrubbery);
			bob.executeForm(shrubbery);
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

		// RobotomyRequestForm - Bob
		std::cout << CYAN << "\nTesting RobotomyRequestForm with Bob (grade 1):" << RESET << std::endl;
		try {
			RobotomyRequestForm robotomy("Alice");
			bob.signForm(robotomy);
			bob.executeForm(robotomy);
			bob.executeForm(robotomy);
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

		// PresidentialPardonForm - Bob
		std::cout << CYAN << "\nTesting PresidentialPardonForm with Bob (grade 1):" << RESET << std::endl;
		try {
			PresidentialPardonForm pardon("Charlie");
			bob.signForm(pardon);
			bob.executeForm(pardon);
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

		Bureaucrat alice("Alice", 50);
		std::cout << GREEN << "\nCreated Bureaucrat: " << alice << RESET << std::endl;

		// ShrubberyCreationForm - Alice
		std::cout << CYAN << "\nTesting ShrubberyCreationForm with Alice (grade 50):" << RESET << std::endl;
		try {
			ShrubberyCreationForm shrubbery2("garden");
			std::cout << CYAN << shrubbery2 << RESET;
			alice.signForm(shrubbery2);
			alice.executeForm(shrubbery2);
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

		// RobotomyRequestForm - Alice
		std::cout << CYAN << "\nTesting RobotomyRequestForm with Alice (grade 50):" << RESET << std::endl;
		try {
			RobotomyRequestForm robotomy2("Bob");
			std::cout << CYAN << robotomy2 << RESET;
			alice.signForm(robotomy2);
			alice.executeForm(robotomy2);
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

		// PresidentialPardonForm - Alice
		std::cout << CYAN << "\nTesting PresidentialPardonForm with Alice (grade 50):" << RESET << std::endl;
		try {
			PresidentialPardonForm pardon2("Dave");
			std::cout << CYAN << pardon2 << RESET;
			alice.signForm(pardon2);
			alice.executeForm(pardon2);
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

		Bureaucrat charlie("Charlie", 150);
		std::cout << GREEN << "\nCreated Bureaucrat: " << charlie << RESET << std::endl;

		// ShrubberyCreationForm - Charlie
		std::cout << CYAN << "\nTesting ShrubberyCreationForm with Charlie (grade 150):" << RESET << std::endl;
		try {
			ShrubberyCreationForm shrubbery3("park");
			std::cout << CYAN << shrubbery3 << RESET;
			charlie.signForm(shrubbery3);
			charlie.executeForm(shrubbery3);
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

		// RobotomyRequestForm - Charlie
		std::cout << CYAN << "\nTesting RobotomyRequestForm with Charlie (grade 150):" << RESET << std::endl;
		try {
			RobotomyRequestForm robotomy3("Eve");
			std::cout << CYAN << robotomy3 << RESET;
			charlie.signForm(robotomy3);
			charlie.executeForm(robotomy3);
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

		// PresidentialPardonForm - Charlie
		std::cout << CYAN << "\nTesting PresidentialPardonForm with Charlie (grade 150):" << RESET << std::endl;
		try {
			PresidentialPardonForm pardon3("Frank");
			std::cout << CYAN << pardon3 << RESET;
			charlie.signForm(pardon3);
			charlie.executeForm(pardon3);
		} catch (const std::exception &e) {
			std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
		}

	} catch (const std::exception &e) {
		std::cerr << RED << "\nException caught in main: " << e.what() << RESET << std::endl;
	}

	return 0;
}
