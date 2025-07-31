/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:19:07 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 19:01:22 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
AForm::AForm(): _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExec(150) {}

AForm::~AForm() {}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExec, const std::string target):
 	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _target(target){
	if (gradeToSign > 150 || gradeToExec > 150)
		throw 
		GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm& other):
 _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other)
		this->_isSigned = other._isSigned;
	return (*this);
}
// ============================================================================

// ============================== GETTERS =====================================
const std::string&	AForm::getTarget()		const {return (this->_target); }
const std::string&	AForm::getName() 		const { return (this->_name); }
bool 				AForm::getIsSigned()	const { return (this->_isSigned); }
int					AForm::getGradeToSign()	const { return (this->_gradeToSign); }
int					AForm::getGradeToExec()	const { return (this->_gradeToExec); }
// ============================================================================

// ================================= METHODS ==================================
void AForm::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const {
	if (!this->_isSigned)
		throw isNotSignedException();
	if (executor.getGrade() > this->_gradeToExec)
		throw GradeTooLowException();
	this->executeAction();
}
// ============================================================================

// ============================== EXCEPTIONS ==================================
const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

const char* AForm::isNotSignedException::what() const throw() {
	return ("Form is not signed");
}
// ============================================================================

// std::ostream& operator<<(std::ostream os, const Form& other);
std::ostream& operator<<(std::ostream& os, const AForm& Form) {
	os << Form.getName() << ": Signed: " << Form.getIsSigned()
		<< ": Grade to sign: " << Form.getGradeToSign()
		<< ": Grade to exec: " << Form.getGradeToExec()
		<< std::endl;
	return (os);
}
