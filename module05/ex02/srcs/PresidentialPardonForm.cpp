/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:28:27 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:39:59 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
PresidentialPardonForm::PresidentialPardonForm(): _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

// mudar isso aqui
// PresidentialPardonForm::PresidentialPardonForm(const std::string name, const int gradeToSign, const int gradeToExec):
//  	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
// 	if (gradeToSign > 150 || gradeToExec > 150)
// 		throw 
// 		GradeTooLowException();
// 	else if (gradeToSign < 1 || gradeToExec < 1)
// 		throw GradeTooHighException();
// }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):
 _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != &other)
		this->_isSigned = other._isSigned;
	return (*this);
}
// ============================================================================