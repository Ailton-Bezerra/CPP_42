/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:17:44 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:35:57 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "./Bureaucrat.hpp"
// Required grades: sign 145, exec 137
// Creates a file <target>_shrubbery in the working directory and writes ASCII trees
// inside it.

class ShrubberyCreationForm {
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		// ShrubberyCreationForm(std::string name, int grade);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		
};

#endif