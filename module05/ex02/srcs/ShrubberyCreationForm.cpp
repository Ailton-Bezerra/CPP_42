/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:14:16 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:40:04 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
ShrubberyCreationForm::ShrubberyCreationForm(): _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const int gradeToSign, const int gradeToExec):
//  	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
// 	if (gradeToSign > 150 || gradeToExec > 150)
// 		throw 
// 		GradeTooLowException();
// 	else if (gradeToSign < 1 || gradeToExec < 1)
// 		throw GradeTooHighException();
// }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
 _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other)
		this->_isSigned = other._isSigned;
	return (*this);
}
// ============================================================================