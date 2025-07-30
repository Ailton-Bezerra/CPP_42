/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:29:26 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:40:02 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
RobotomyRequestForm::RobotomyRequestForm(): _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

// RobotomyRequestForm::RobotomyRequestForm(const std::string name, const int gradeToSign, const int gradeToExec):
//  	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
// 	if (gradeToSign > 150 || gradeToExec > 150)
// 		throw 
// 		GradeTooLowException();
// 	else if (gradeToSign < 1 || gradeToExec < 1)
// 		throw GradeTooHighException();
// }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):
 _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other)
		this->_isSigned = other._isSigned;
	return (*this);
}
// ============================================================================