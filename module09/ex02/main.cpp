/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:15:52 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/12 19:15:55 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
	if (argc < 2) {
		std::cerr << "not enough numbers" << std::endl;
		return (-1);
	}
	
	try {
		PmergeMe pm;
		pm.processInput(argc, argv);
		pm.sortVector();
		pm.sortDeque();
	}
	catch (std::exception& e) {
		std::cerr << "Erro: " << e.what() << std::endl;
		return (-1);
	}
	return (0);
}
