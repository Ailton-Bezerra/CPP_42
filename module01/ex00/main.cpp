/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:10:52 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/11 13:40:53 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* test = newZombie("Francisquinho");
	test->announce();
	std::cout << std::endl;
	
	randomChump("Enzo");
	std::cout << std::endl;
	
	delete test;
	return (0);
}
