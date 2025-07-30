/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:19:17 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:26:17 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
// #include "Bureaucrat.hpp"

class Bureaucrat; // Forward declaration

// preciso colocar algum metodo virtual puro
// os atributos precisam permanecer privados
class AForm {
	public:
		AForm();
		~AForm();
		AForm(const AForm& other);
		AForm(const std::string name, const int gradeToSign, const int gradeToExec);
		AForm& operator=(const AForm& other);

		void beSigned(const Bureaucrat& bureaucrat);
		// preciso implementar
		execute(Bureaucrat const & executor) const;

		//getters
		const std::string&	getName() 			const;
		bool				getIsSigned()		const;
		int					getGradeToSign()	const;
		int					getGradeToExec()	const;

		// exceptions
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();	
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int 			_gradeToSign;
		const int 			_gradeToExec;
};

std::ostream& operator<<(std::ostream& os, const AForm& other);

#endif