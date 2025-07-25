/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:36:11 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/25 18:09:33 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        std::cout << "Criando Bureaucrat com grade 1 (limite superior):" << std::endl;
        Bureaucrat high("Alice", 1);
        std::cout << high.getName() << ", grade: " << high.getGrade() << std::endl;

        std::cout << "Tentando incrementar (deve lançar GradeTooHighException):" << std::endl;
        high.incrementGrade();
    }
    catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << "Exceção capturada: " << e.what() << std::endl;
    }

    std::cout << "------------------------" << std::endl;

    try {
        std::cout << "Criando Bureaucrat com grade 150 (limite inferior):" << std::endl;
        Bureaucrat low("Bob", 150);
        std::cout << low.getName() << ", grade: " << low.getGrade() << std::endl;

        std::cout << "Tentando decrementar (deve lançar GradeTooLowException):" << std::endl;
        low.decrementGrade();
    }
    catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "Exceção capturada: " << e.what() << std::endl;
    }

    std::cout << "------------------------" << std::endl;

    try {
        std::cout << "Criando Bureaucrat com grade inválido (200):" << std::endl;
        Bureaucrat invalid("Charlie", 200); // Deve lançar na construção
    }
    catch (const std::exception& e) {
        std::cerr << "Exceção capturada ao criar Bureaucrat: " << e.what() << std::endl;
    }

	 std::cout << "------------------------" << std::endl;

    try {
        std::cout << "Criando Bureaucrat com grade inválido (0):" << std::endl;
        Bureaucrat invalid("Charlie", 0); // Deve lançar na construção
    }
    catch (const std::exception& e) {
        std::cerr << "Exceção capturada ao criar Bureaucrat: " << e.what() << std::endl;
    }

	std::cout << "------------------------" << std::endl;

    try {
        std::cout << "Criando Bureaucrat com grade 150 (limite inferior):" << std::endl;
        Bureaucrat low("Bob", 150);
        std::cout << low.getName() << ", grade: " << low.getGrade() << std::endl;

        std::cout << "Tentando incrementar:" << std::endl;
        low.incrementGrade();
		std::cout << low.getName() << ", grade: " << low.getGrade() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "Exceção capturada: " << e.what() << std::endl;
    }
	
	        // Test creating Form with valid grades
        std::cout << "\nCreating Form with valid grades..." << std::endl;
        Form formA("Form A", 50, 100);
        std::cout << "Success: " << std::endl;

        // Test creating Form with invalid grade (too high)
        std::cout << "\nCreating Form with invalid high grade..." << std::endl;
        try {
            Form invalidFormHigh("Invalid Form High", 0, 100);
        } catch (const std::exception& e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        // Test creating Form with invalid grade (too low)
        std::cout << "\nCreating Form with invalid low grade..." << std::endl;
        try {
            Form invalidFormLow("Invalid Form Low", 50, 151);
        } catch (const std::exception& e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        // Test signing form with Bureaucrat
        std::cout << "\nTesting signing form with valid Bureaucrat..." << std::endl;
        try {
            john.signForm(formA);
            std::cout << "Success: " << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        // Test signing form with Bureaucrat with insufficient grade
        std::cout << "\nTesting signing form with insufficient grade Bureaucrat..." << std::endl;
        Bureaucrat lowGradeBureaucrat("Low Grade", 100);
        try {
            lowGradeBureaucrat.signForm(formA);
        } catch (const std::exception& e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "\nException caught in main: " << e.what() << std::endl;
    }

	
    return 0;
}


// #include <iostream>
// #include <string>
// #include "Bureaucrat.hpp"
// #include "Form.hpp"

// #define RESET "\033[0m"
// #define RED "\033[31m"
// #define GREEN "\033[32m"
// #define CYAN "\033[36m"
// #define MAGENTA "\033[35m"

// void printHeader(const std::string& title) {
//     std::cout << MAGENTA << "========== " << title << " ==========" << RESET << std::endl;
// }

// int main() {
//     try {
//         printHeader("Bureaucrat Tests");

//         // Test creating Bureaucrat with valid grade
//         std::cout << CYAN << "\nCreating Bureaucrat with valid grade..." << RESET << std::endl;
//         Bureaucrat john("John Doe", 42);
//         std::cout << GREEN << "Success: " << john << RESET << std::endl;

//         // Test creating Bureaucrat with invalid grade (too high)
//         std::cout << CYAN << "\nCreating Bureaucrat with invalid high grade..." << RESET << std::endl;
//         try {
//             Bureaucrat invalidHigh("Invalid High", 0);
//         } catch (const std::exception& e) {
//             std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
//         }

//         // Test creating Bureaucrat with invalid grade (too low)
//         std::cout << CYAN << "\nCreating Bureaucrat with invalid low grade..." << RESET << std::endl;
//         try {
//             Bureaucrat invalidLow("Invalid Low", 151);
//         } catch (const std::exception& e) {
//             std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
//         }

//         // Test incrementing and decrementing Bureaucrat grade
//         std::cout << CYAN << "\nIncrementing and decrementing Bureaucrat grade..." << RESET << std::endl;
//         john.incrementGrade();
//         std::cout << GREEN << "After increment: " << john << RESET << std::endl;
//         john.decrementGrade();
//         std::cout << GREEN << "After decrement: " << john << RESET << std::endl;

//         printHeader("Form Tests");

//         // Test creating Form with valid grades
//         std::cout << CYAN << "\nCreating Form with valid grades..." << RESET << std::endl;
//         Form formA("Form A", 50, 100);
//         std::cout << GREEN << "Success: " << formA << RESET << std::endl;

//         // Test creating Form with invalid grade (too high)
//         std::cout << CYAN << "\nCreating Form with invalid high grade..." << RESET << std::endl;
//         try {
//             Form invalidFormHigh("Invalid Form High", 0, 100);
//         } catch (const std::exception& e) {
//             std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
//         }

//         // Test creating Form with invalid grade (too low)
//         std::cout << CYAN << "\nCreating Form with invalid low grade..." << RESET << std::endl;
//         try {
//             Form invalidFormLow("Invalid Form Low", 50, 151);
//         } catch (const std::exception& e) {
//             std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
//         }

//         // Test signing form with Bureaucrat
//         std::cout << CYAN << "\nTesting signing form with valid Bureaucrat..." << RESET << std::endl;
//         try {
//             john.signForm(formA);
//             std::cout << GREEN << "Success: " << formA << RESET << std::endl;
//         } catch (const std::exception& e) {
//             std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
//         }

//         // Test signing form with Bureaucrat with insufficient grade
//         std::cout << CYAN << "\nTesting signing form with insufficient grade Bureaucrat..." << RESET << std::endl;
//         Bureaucrat lowGradeBureaucrat("Low Grade", 100);
//         try {
//             lowGradeBureaucrat.signForm(formA);
//         } catch (const std::exception& e) {
//             std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
//         }

//     } catch (const std::exception& e) {
//         std::cerr << RED << "\nException caught in main: " << e.what() << RESET << std::endl;
//     }

//     return 0;
// }
