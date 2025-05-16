/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:47:59 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/16 13:26:16 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _fpValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fpValue = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpValue);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpValue = raw;
}