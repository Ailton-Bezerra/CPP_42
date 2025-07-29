/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:36:11 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/29 20:03:39 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"

void printHeader(const std::string& title) {
    std::cout << MAGENTA << "========== " << title << " ==========" << RESET << std::endl;
}

int main() 
{
    try {
        printHeader("Bureaucrat Tests");

        // Test creating Bureaucrat with valid grade
        std::cout << CYAN << "\nCreating Bureaucrat with valid grade..." << RESET << std::endl;
        Bureaucrat john("John Doe", 42);
        std::cout << GREEN << "Success: " << john << RESET << std::endl;

        // Test creating Bureaucrat with invalid grade (too high)
        std::cout << CYAN << "\nCreating Bureaucrat with invalid high grade..." << RESET << std::endl;
        try {
            Bureaucrat invalidHigh("Invalid High", 0);
        } catch (const std::exception& e) {
            std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
        }

        // Test creating Bureaucrat with invalid grade (too low)
        std::cout << CYAN << "\nCreating Bureaucrat with invalid low grade..." << RESET << std::endl;
        try {
            Bureaucrat invalidLow("Invalid Low", 151);
        } catch (const std::exception& e) {
            std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
        }

        // Test incrementing and decrementing Bureaucrat grade
        std::cout << CYAN << "\nIncrementing and decrementing Bureaucrat grade..." << RESET << std::endl;
        john.incrementGrade();
        std::cout << GREEN << "After increment: " << john << RESET << std::endl;
        john.decrementGrade();
        std::cout << GREEN << "After decrement: " << john << RESET << std::endl;
	
		  } catch (const std::exception& e) {
        std::cerr << RED << "\nException caught in main: " << e.what() << RESET << std::endl;
    }
    return 0;
}


// int main() {
//     try {
//         std::cout << "Criando Bureaucrat com grade 1 (limite superior):" << std::endl;
//         Bureaucrat high("Alice", 1);
//         std::cout << high.getName() << ", grade: " << high.getGrade() << std::endl;

//         std::cout << "Tentando incrementar (deve lançar GradeTooHighException):" << std::endl;
//         high.incrementGrade();
//     }
//     catch (const Bureaucrat::GradeTooHighException& e) {
//         std::cerr << "Exceção capturada: " << e.what() << std::endl;
//     }

//     std::cout << "------------------------" << std::endl;

//     try {
//         std::cout << "Criando Bureaucrat com grade 150 (limite inferior):" << std::endl;
//         Bureaucrat low("Bob", 150);
//         std::cout << low.getName() << ", grade: " << low.getGrade() << std::endl;

//         std::cout << "Tentando decrementar (deve lançar GradeTooLowException):" << std::endl;
//         low.decrementGrade();
//     }
//     catch (const Bureaucrat::GradeTooLowException& e) {
//         std::cerr << "Exceção capturada: " << e.what() << std::endl;
//     }

//     std::cout << "------------------------" << std::endl;

//     try {
//         std::cout << "Criando Bureaucrat com grade inválido (200):" << std::endl;
//         Bureaucrat invalid("Charlie", 200); // Deve lançar na construção
//     }
//     catch (const std::exception& e) {
//         std::cerr << "Exceção capturada ao criar Bureaucrat: " << e.what() << std::endl;
//     }

// 	 std::cout << "------------------------" << std::endl;

//     try {
//         std::cout << "Criando Bureaucrat com grade inválido (0):" << std::endl;
//         Bureaucrat invalid("Charlie", 0); // Deve lançar na construção
//     }
//     catch (const std::exception& e) {
//         std::cerr << "Exceção capturada ao criar Bureaucrat: " << e.what() << std::endl;
//     }

// 	std::cout << "------------------------" << std::endl;

//     try {
//         std::cout << "Criando Bureaucrat com grade 150 (limite inferior):" << std::endl;
//         Bureaucrat low("Bob", 150);
//         std::cout << low.getName() << ", grade: " << low.getGrade() << std::endl;

//         std::cout << "Tentando incrementar:" << std::endl;
//         low.incrementGrade();
// 		std::cout << low.getName() << ", grade: " << low.getGrade() << std::endl;
//     }
//     catch (const Bureaucrat::GradeTooLowException& e) {
//         std::cerr << "Exceção capturada: " << e.what() << std::endl;
//     }
	
//     return 0;
// }
