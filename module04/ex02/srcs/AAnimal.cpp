/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:45:35 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/26 16:40:24 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void) : type("generic animal") { std::cout << "default animal\tcreated" << std::endl; }

AAnimal::~AAnimal(void) { std::cout << "animal\tdestroyed" << std::endl; }

AAnimal::AAnimal(const AAnimal& other) { this->type = other.type ; }

AAnimal& AAnimal::operator=(const AAnimal& other) {
	this->type = other.type;
	return (*this);
}

const std::string	AAnimal::getType(void) const { return this->type; }
void				AAnimal::setType(const std::string new_type) { this->type = new_type; }
// void 				AAnimal::makeSound(void) const { std::cout << "generic sound!" << std::endl; }
