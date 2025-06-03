/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:49:00 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/03 16:14:46 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		AMateria* 		_inventory[4];
		std::string		_name;
		
	public:
		Character();
		~Character();
		Character(const std::string name);
		Character(const Character& other);
		const Character& operator=(const Character& other);
	
		std::string const &	getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
