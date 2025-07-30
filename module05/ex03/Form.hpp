/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:19:17 by ailbezer          #+#    #+#             */
/*   Updated: 2025/07/30 14:19:02 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class AForm {
	public:
		AForm();
		~AForm();
		AForm(const AForm& other);
		// construtor com argumento	
		// Form(std::string name, int grade);
		AForm& operator=(const AForm& other);

		void beSigned(const Bureaucrat& bureaucrat);

	private:
		const std::string	_name;
		bool				_isSigned;
		const int 			_gradeToSign;
		const int 			_gradeToExec;
}

#endif