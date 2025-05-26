/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:53:59 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/26 16:40:20 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) {
	type = "Cat";
	std::cout << "default cat\tcreated" << std::endl; 
}

Cat::~Cat(void) { std::cout << "cat\tdestroyed" << std::endl; }

Cat::Cat(const Cat& other) {
	this->type = other.type;
	std::cout << "Animal class: " << other.type << " copied!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "Animal class: " << other.type << " atribued!" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const { std::cout << "animal class " << this->type << ": make Meow" << std::endl; }
