/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:47:59 by ailbezer          #+#    #+#             */
/*   Updated: 2025/05/16 16:19:50 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	return (this->_fpValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fpValue = raw;
}

Fixed::Fixed(const int i) : _fpValue(i << _fractionalBits) {
		std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _fpValue(roundf(f * (1 << _fractionalBits))) {
		std::cout << "Float constructor called" << std::endl;
}

float	Fixed::toFloat(void) const {
	return ((float)this->_fpValue / (1 << this->_fractionalBits));
}

int		Fixed::toInt(void) const {
	return (this->_fpValue >> this->_fractionalBits);
}

std::ostream& operator<<(std::ostream& os,  const Fixed& f) {
	os << f.toFloat();
	return (os);
}
