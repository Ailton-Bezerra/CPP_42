/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:19:31 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/05 19:12:18 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"

int main() {
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	
	Base* test = generate();
	Base&	e_test = *test;

	std::cout << GREEN "testing identify(Base* p): " RESET;
	identify(test);
	std::cout << std::endl;
	std::cout << GREEN "testing identify(Base& p): " RESET;
	identify(e_test);
	std::cout << std::endl;
	
	delete (test);
	return (0);
}
