/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:40:50 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/15 11:52:04 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void) {
	Harl test;

	test.complain("INFO");
	std::cout << std::endl;
	test.complain("DEBUG");
	std::cout << std::endl;
	test.complain("ERROR");
	std::cout << std::endl;
	test.complain("WARNING");
	std::cout << std::endl;
	test.complain("SLEEP");
	std::cout << std::endl;
	test.complain("ERRORR");

	return (0);
}