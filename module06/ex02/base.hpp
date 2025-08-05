/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:50:43 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/05 19:10:16 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE
#define BASE

#include <iostream>
#include <cstdlib>
#include <ctime>

#define RESET "\033[0m"
#define GREEN "\033[32m"

class Base {
	public:
		virtual ~Base() {};
} ;

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif