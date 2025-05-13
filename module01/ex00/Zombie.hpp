/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:05:00 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/13 14:31:13 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce( void );
	
	private:
		std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif