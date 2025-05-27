/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:53:59 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/26 16:42:15 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) {
	type = "Cat";
	std::cout << "default cat\tcreated" << std::endl; 
}

WrongCat::~WrongCat(void) { std::cout << "Wrong cat destroyed" << std::endl; }

WrongCat::WrongCat(const WrongCat& other) {
	this->type = other.type;
	std::cout << "Animal class: " << other.type << " copied!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "Animal class: " << other.type << " atribued!" << std::endl;
	return (*this);
}

void WrongCat::makeSound(void) const { std::cout << "animal class " << this->type << ": make Meow" << std::endl; }
