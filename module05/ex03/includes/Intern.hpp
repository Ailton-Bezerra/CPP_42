/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:11:29 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/01 17:28:34 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		
		AForm* makeForm(const std::string& name, const std::string& target);

		class NotFoundException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		AForm* _createPresidentialForm(const std::string& target);
		AForm* _createRobotomyForm(const std::string& target);
		AForm* _createShrubberyForm(const std::string& target);
};

#endif
