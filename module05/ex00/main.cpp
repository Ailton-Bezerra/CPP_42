/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:36:11 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/22 18:50:18 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

    return 0;
}
