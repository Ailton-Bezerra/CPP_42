/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:33:03 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/14 15:03:16 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	public:
		Weapon(const std::string& type): _type(type) {};
		~Weapon(){};
		
		const std::string&	getType(void) const;
		void				setType(const std::string& type);
		
	private:
		std::string _type;
};

#endif