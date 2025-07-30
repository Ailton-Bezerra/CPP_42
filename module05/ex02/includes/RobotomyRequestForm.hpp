/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:17:41 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:36:04 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "./Bureaucrat.hpp"
//  Required grades: sign 72, exec 45
// Makes some drilling noises, then informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, it informs that the robotomy failed.

class RobotomyRequestForm {
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& other);
		// RobotomyRequestForm(std::string name, int grade);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		
};

#endif