/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:05:52 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/03 12:46:02 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

// While assigning a Materia to another, copying the type doesn’t make sense.
class AMateria
{
	protected:
		std::string _type;
	
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& other);

		const AMateria&	operator=(const AMateria& other);
		virtual			~AMateria(void);
		
		std::string const & getType(void) const;
		
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif