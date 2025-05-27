/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:54:14 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/27 12:59:07 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : brain(new Brain()) {
	type = "Dog";
	std::cout << "default Dog\tcreated" << std::endl; 
}

Dog::~Dog(void) {
	delete brain;
	std::cout << "dog\tdestroyed" << std::endl;
}

Dog::Dog(const Dog& other) {
	this->brain = new Brain(*other.brain);
	this->type = other.type;
	std::cout << "Animal class: " << other.type << " copied!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		delete this->brain;
		this->brain = new Brain(*other.brain);
		this->type = other.type;
	}
	std::cout << "Animal class: " << other.type << " atribued!" << std::endl;
	return (*this);
}

void 				Dog::makeSound(void) const {
	std::cout << "animal class " << this->type << ": make Bark" << std::endl;
}

void				Dog::setIdea(const std::string idea, int index) {
	this->brain->ideas[index] = idea;
}
const std::string	Dog::getIdea(int index) const {
	return (this->brain->ideas[index]);	
}
