/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:19:07 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/29 19:51:15 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
Form::Form(): _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {}

Form::~Form() {}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec):
 	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	if (gradeToSign > 150 || gradeToExec > 150)
		throw 
		GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
}

Form::Form(const Form& other):
 _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}

Form& Form::operator=(const Form& other) {
	if (this != &other)
		this->_isSigned = other._isSigned;
	return (*this);
}
// ============================================================================

// ============================== GETTERS =====================================
const std::string&	Form::getName() 		const { return (this->_name); }
bool 				Form::getIsSigned()		const { return (this->_isSigned); }
int					Form::getGradeToSign()	const { return (this->_gradeToSign); }
int					Form::getGradeToExec()	const { return (this->_gradeToExec); }
// ============================================================================

// ================================= METHODS ==================================
void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}
// ============================================================================

// ============================== EXCEPTIONS ==================================
const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}
// ============================================================================

// std::ostream& operator<<(std::ostream os, const Form& other);
std::ostream& operator<<(std::ostream& os, const Form& Form) {
	os << Form.getName() << ": Signed: " << Form.getIsSigned()
		<< ": Grade to sign: " << Form.getGradeToSign()
		<< ": Grade to exec: " << Form.getGradeToExec()
		<< std::endl;
	return (os);
}
