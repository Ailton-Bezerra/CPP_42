/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:05:00 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/14 11:04:18 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>

class Zombie {

	public:
		Zombie(void);
		~Zombie(void);
		
		void announce( void );
		void setName(std::string name);
		
	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif