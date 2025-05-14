/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:34:30 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/14 17:39:07 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

bool valid_input(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "valid input: <filename> <s1> <s2>" << std::endl;
		return (false);
	}
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	
	if (filename.empty()) {
		std::cout << "filename must not be empty" << std::endl;
		return (false);
	}
	if (s1.empty())	{
		std::cout << "s1 must not be empty" << std::endl;
		return (false);
	}
	return (true);
}

int main(int argc, char **argv) {

	if (!valid_input(argc, argv))
		return (1);

	MySed editor(argv[1], argv[2], argv[3]);
	editor.editFIle();
	
	return (0);
}