/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:46:31 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/15 11:36:54 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
	public:
		Harl() {};
		~Harl() {};
	
		void	complain(std::string level);
	
	private:
		void	info(void);
		void	warning(void);
		void	error(void);
		void	debug(void);
};

#endif