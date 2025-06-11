/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:33:59 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/10 12:22:43 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "resources.hpp"
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		index;
		int		contact_num;

	public: 
		PhoneBook();
		void		AddContact(void);
		void		SearchContact(void);
};

#endif