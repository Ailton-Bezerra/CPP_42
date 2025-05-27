/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:53:59 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/27 12:57:49 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : brain(new Brain()) {
	type = "Cat";
	std::cout << "default cat\tcreated" << std::endl; 
}

Cat::~Cat(void) {
	delete brain;
	std::cout << "cat\tdestroyed" << std::endl;
}

Cat::Cat(const Cat& other) {
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Animal class: " << other.type << " copied!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		delete this->brain;
		this->brain = new Brain(*other.brain);
		this->type = other.type;
	}
	std::cout << "Animal class: " << other.type << " atribued!" << std::endl;
	return (*this);
}

void 				Cat::makeSound(void) const {
	std::cout << "animal class " << this->type << ": make Meow" << std::endl;
}

void				Cat::setIdea(const std::string idea, int index) {
	this->brain->ideas[index] = idea;
}
const std::string	Cat::getIdea(int index) const {
	return (this->brain->ideas[index]);	
}
