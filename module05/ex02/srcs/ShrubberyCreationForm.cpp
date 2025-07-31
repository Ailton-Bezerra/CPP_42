/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:14:16 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 21:15:15 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137, "unknown") {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): 
	AForm("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): AForm(other) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}
// ============================================================================

// ================================= METHODS ==================================
void	ShrubberyCreationForm::executeAction() const {
	std::string filename = this->getTarget() + "_shrubbery";
	std::ofstream file(filename.c_str());

	if (!file)	{
		std::cout << "Error: coldn't creat file " << filename << std::endl;
		return ;
	}
	file << "       _-_             _-_\n";
    file << "    /~~   ~~\\       /~~   ~~\\\n";
    file << " /~~         ~~\\ /~~         ~~\\\n";
    file << "{               }{               }\n";
    file << " \\  _-     -_  / \\  _-     -_  /\n";
    file << "   ~  \\\\ //  ~    ~  \\\\ //  ~\n";
    file << "_- -   | | _- __-   -   | | _- _\n";
    file << "  _ -  | |   -_    _ -  | |   -_\n";
    file << "      // \\\\          // \\\\\n";

    file.close();
	
}
// ============================================================================