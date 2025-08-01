/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:19:17 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/01 14:08:58 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
// #include "Bureaucrat.hpp"

class Bureaucrat; // Forward declaration

// os atributos precisam permanecer privados
class AForm {
	public:
		AForm();
		virtual ~AForm();
		AForm(const AForm& other);
		AForm(const std::string name, const int gradeToSign, const int gradeToExec, const std::string target);
		AForm& operator=(const AForm& other);

		void	beSigned(const Bureaucrat& bureaucrat);
		// preciso implementar
		void	execute(Bureaucrat const & executor) const;

		//getters
		const std::string&	getTarget()			const;
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

		class isNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw();	
		};

	protected:
		virtual void	executeAction() const = 0;
		
	private:
		const std::string	_name;
		bool				_isSigned;
		const int 			_gradeToSign;
		const int 			_gradeToExec;
		const std::string	_target;
};

std::ostream& operator<<(std::ostream& os, const AForm& other);

#endif