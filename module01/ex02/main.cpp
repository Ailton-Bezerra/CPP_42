/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:36:35 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/14 12:03:44 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string		brain = "HI THIS IS YOUR BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;
	
	std::cout << "address of the str variable:\t" << &brain << std::endl;
	std::cout << "address held by stringPTR:\t" << stringPTR << std::endl;
	std::cout << "address held by stringREF:\t" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "value of the string variable:\t" << brain << std::endl;
	std::cout << "value pointed to by stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF:\t" << stringREF << std::endl;

	return (0);
}
