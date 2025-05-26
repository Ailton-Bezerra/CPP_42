/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:45:35 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/26 16:42:20 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("generic animal") { std::cout << "default animal\tcreated" << std::endl; }

WrongAnimal::~WrongAnimal(void) { std::cout << "Wrong animal destroyed" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal& other) { this->type = other.type ; }

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	this->type = other.type;
	return (*this);
}

const std::string	WrongAnimal::getType(void) const { return this->type; }
void				WrongAnimal::setType(const std::string new_type) { this->type = new_type; }
void 				WrongAnimal::makeSound(void) const { std::cout << "Wrong animal\tgeneric sound!" << std::endl; }
