/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:10:52 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/14 11:23:14 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* horde = zombieHorde(10, "Enzo");

	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		horde[i].announce();
	}
	std::cout << std::endl;
	horde->announce();
	std::cout << std::endl;
	delete[] horde;
	return (0);
}
