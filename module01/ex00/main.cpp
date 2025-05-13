/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:10:52 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/13 14:40:49 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* test = newZombie("Francisquinho");
	test->announce();
	
	randomChump("Enzo");
	
	delete test;
	return (0);
}
