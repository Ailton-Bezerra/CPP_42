/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:49:56 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/07 17:39:02 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

static void	print_menu(void){
	std::cout << std::endl;
	std::cout << YELLOW"-------------PHONEBOOK COMMANDS------------" RESET << std::endl;
	std::cout << YELLOW"ADD" RESET"\tsave a new contact" << std::endl;
	std::cout << YELLOW"SEARCH" RESET"\tdisplay a specific contact" << std::endl;
	std::cout << YELLOW"EXIT" RESET"\tclear and close the phonebook" << std::endl;
	std::cout << YELLOW"-------------------------------------------\n" RESET << std::endl;
	std::cout << "What you want to do? : ";
}

int	main(void) {
	std::string input;
	PhoneBook PhoneBook;

	while (1) {
		print_menu();
		std::getline(std::cin, input);
		if (!std::cin.good() || input == "EXIT") {
			std::cout << "\n" EXITING << std::endl;
			break ;
		}
		else if (input == "ADD")
			PhoneBook.AddContact();
		else if (input == "SEARCH")
			PhoneBook.SearchContact();
		else
			std::cout << RED "\n\tinvalid command" RESET << std::endl;
	}
	return (0);
}
