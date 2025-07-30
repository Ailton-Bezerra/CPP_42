/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:37:03 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:19:02 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
// ===================== ORTHODOX CANONICAL FORM ==============================
Bureaucrat::Bureaucrat(): _name("Default"), _grade(150) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):
 _name(other.getName()), _grade(other.getGrade()) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}
// ============================================================================

// ============================== GETTERS =====================================
int Bureaucrat::getGrade() const{
	return (this->_grade);
}

const std::string& Bureaucrat::getName() const{
	return (this->_name);
}
// ============================================================================

// ================================= METHODS ==================================

void	Bureaucrat::signForm(AForm& form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} 
	catch (const std::exception& e) {
		std::cout << this->_name << " couldn’t sign " << form.getName()
					<< " because " << e.what() << std::endl;
	}
	
}

void	Bureaucrat::incrementGrade() {
	try {
		if (this->_grade < 1)
			throw GradeTooHighException();
		this->_grade--;
	} catch (const std::exception& e) { //ver se é necessario msm utilizar const aqui
		std::cerr << "Exception caught by Bureaucrat " << this->_name
					<< " when try to increment grade: " << e.what()
					<< "\ncurrent grade: " << this->_name
					<< std::endl;
	}
}

void	Bureaucrat::decrementGrade() {
	try {
		if (this->_grade > 150)
			throw GradeTooLowException();
		this->_grade++;
	} catch (const std::exception& e) { //ver se é necessario msm utilizar const aqui
		std::cerr << "Exception caught by Bureaucrat " << this->_name
					<< " when try to decrement grade: " << e.what()
					<< "\ncurrent grade: " << this->_grade
					<< std::endl;
	}
}
// ============================================================================

// ============================== EXCEPTIONS ==================================
const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

// ============================================================================

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade()
		<< std::endl;
	return (os);
}