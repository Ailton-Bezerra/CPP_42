/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:13:05 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:40:32 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat {
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat(std::string name, int grade);
		Bureaucrat& operator=(const Bureaucrat& other);
		
		const std::string&	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();

		void				signForm(AForm& form);
		// preciso implementar isso
		executeForm(AForm const & form) const;
		
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
		const std::string _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);
#endif