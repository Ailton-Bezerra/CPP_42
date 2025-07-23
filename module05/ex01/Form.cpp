/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:19:07 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/23 18:33:15 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ===================== ORTHODOX CANONICAL FORM ==============================
Form::Form(): _name("Default"), _grade(150) {}

Form::~Form() {}

// construtor com argumento
// Form::Form(std::string name, int grade): _name(name), _grade(grade) {
// 	if (grade < 1)
// 		throw GradeTooLowException();
// 	else if (grade > 150)
// 		throw GradeTooHighException();
// }

Form::Form(const Form& other):
 _name(other.getName()), _grade(other.getGrade()) {}

Form& Form::operator=(const Form& other) {
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}
// ============================================================================

// this may contem all information of Forms
std::ostream& operator<<(std::ostream& os, const Form& Form) {
	os << Form.getName() << ", Form grade" << Form.getGrade()
		<< std::endl;
	return (os);