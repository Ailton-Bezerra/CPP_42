/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:40:48 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/14 15:18:07 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB(void){};
	
		void attack(void) const;
		void setWeapon(Weapon& weapon);

	private:
		std::string _name;
		Weapon*		_weapon;
};

#endif