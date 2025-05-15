/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:40:50 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/15 12:28:30 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv) {
	if (argc != 2) {
		std::cout << "valid input: <./harlFilter> <string>" << std::endl;
		return (1);
	}
	
	std::string level = argv[1];
	Harl test;
	
	test.complain(level);

	return (0);
}
