/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:36:11 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/01 14:39:27 by ailbezer         ###   ########.fr       */
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
