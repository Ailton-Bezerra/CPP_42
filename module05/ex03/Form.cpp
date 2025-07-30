/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:19:07 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:19:02 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
AForm::AForm(): _name("Default"), _grade(150) {}

AForm::~AForm() {}

// construtor com argumento
// Form::Form(std::string name, int grade): _name(name), _grade(grade) {
// 	if (grade < 1)
// 		throw GradeTooLowException();
// 	else if (grade > 150)
// 		throw GradeTooHighException();
// }

AForm::AForm(const AForm& other):
 _name(other.getName()), _grade(other.getGrade()) {}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}
// ============================================================================

// this may contem all information of Forms
std::ostream& operator<<(std::ostream& os, const AForm& Form) {
	os << Form.getName() << ", Form grade" << Form.getGrade()
		<< std::endl;
	return (os);