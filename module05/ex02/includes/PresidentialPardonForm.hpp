/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:17:38 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:36:10 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "./Bureaucrat.hpp"

// Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox

// All of them take only one parameter in their constructor: the target of the form. For
// example, "home" if you want to plant shrubbery at home.
// provavelmente algo do tipo: PresidentialPardonForm(const std::string& target);


class PresidentialPardonForm {
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& other);
		// PresidentialPardonForm(std::string name, int grade);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		
};

#endif