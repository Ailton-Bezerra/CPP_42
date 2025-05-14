/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:49:41 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/14 11:16:46 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* horde =	new Zombie[N];
	std::ostringstream	index;
	
	for (int i = 0; i < N; i++) {
		index.str("");
		index.clear();
		index << i;
		horde[i].setName(name + "_N" + index.str());
	}
	return (horde);
}