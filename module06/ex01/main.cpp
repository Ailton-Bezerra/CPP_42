/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:59:31 by ailbezer          #+#    #+#             */
/*   Updated: 2025/08/05 17:45:45 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data		test;
	uintptr_t	ptr;
	Data*		recover;
	
	test.text = "HELLOWWWW!";
	test.number = 10;

	std::cout << YELLOW "========= ORIGINAL DATA INFOS ==========" RESET << std::endl;
	std::cout << GREEN "DATA PTR:\t\t" << &test << RESET << std::endl;
	std::cout << GREEN "DATA.TEXT:\t\t" << test.text << RESET << std::endl;
	std::cout << GREEN "DATA.NUMBER:\t\t" << test.number << RESET << std::endl;
	std::cout << YELLOW "========================================" RESET << std::endl;

	std::cout << std::endl;
	
	std::cout << YELLOW "========= APPLYING SERIALIZE ===========" RESET << std::endl;
	ptr = Serializer::serialize(&test);
	std::cout << GREEN "UINTPTR_T:\t\t" << ptr << RESET << std::endl;
	std::cout << YELLOW "========================================" RESET << std::endl;
	
	std::cout << std::endl;
	
	std::cout << YELLOW "========= APPLYING DESERIALIZE ===========" RESET << std::endl;
	recover = Serializer::deserialize(ptr);
	std::cout << GREEN "RECOVER DATA PTR:\t" << &recover << RESET << std::endl;
	std::cout << YELLOW "========================================" RESET << std::endl;
	
	std::cout << std::endl;
	
	std::cout << YELLOW "========= RECOVER DATA INFOS ==========" RESET << std::endl;
	std::cout << GREEN "RECOVER DATA *PTR:\t" << recover << RESET << std::endl;
	std::cout << GREEN "DATA.TEXT:\t\t" << recover->text << RESET << std::endl;
	std::cout << GREEN "DATA.NUMBER:\t\t" << recover->number << RESET << std::endl;
	std::cout << YELLOW "========================================" RESET << std::endl;
	return (0);
}
