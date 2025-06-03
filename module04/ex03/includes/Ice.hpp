/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:28:43 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/03 12:46:49 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(const Ice& other);
		const Ice& operator=(const Ice& other);
		~Ice(void);

		Ice*	clone(void) const;
		void	use(ICharacter& target);
};


#endif