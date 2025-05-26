/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:54:14 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/26 16:40:18 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) {
	type = "Dog";
	std::cout << "default Dog\tcreated" << std::endl; 
}

Dog::~Dog(void) { std::cout << "dog\tdestroyed" << std::endl; }

Dog::Dog(const Dog& other) {
	this->type = other.type;
	std::cout << "Animal class: " << other.type << " copied!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "Animal class: " << other.type << " atribued!" << std::endl;
	return (*this);
}

void Dog::makeSound(void) const {std::cout << "animal class " << this->type << ": make Bark" << std::endl;}
