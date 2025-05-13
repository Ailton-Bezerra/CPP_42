/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:07:29 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/13 14:36:15 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name) {
	_name = name;
	std::cout << "zombie created" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "zombie:" << _name << " destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." 
		<< std::endl;
}