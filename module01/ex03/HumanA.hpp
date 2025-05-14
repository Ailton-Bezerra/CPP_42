/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:39:46 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/14 14:55:08 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {};
		~HumanA(void) {};

		void attack(void)const;
		
	private:
		std::string _name;
		Weapon&		_weapon;
};

#endif