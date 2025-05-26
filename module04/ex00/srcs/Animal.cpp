/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:45:35 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/26 16:40:24 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void) : type("generic animal") { std::cout << "default animal\tcreated" << std::endl; }

Animal::~Animal(void) { std::cout << "animal\tdestroyed" << std::endl; }

Animal::Animal(const Animal& other) { this->type = other.type ; }

Animal& Animal::operator=(const Animal& other) {
	this->type = other.type;
	return (*this);
}

const std::string	Animal::getType(void) const { return this->type; }
void				Animal::setType(const std::string new_type) { this->type = new_type; }
void 				Animal::makeSound(void) const { std::cout << "generic sound!" << std::endl; }
