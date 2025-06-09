/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailbezer <ailbezer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:47:59 by ailbezer          #+#    #+#             */
/*   Updated: 2025/06/04 14:18:48 by ailbezer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fpValue(0) {}

Fixed::Fixed(const Fixed& other) {
	*this = other;
}

Fixed::Fixed(const int i) : _fpValue(i << _fractionalBits) {}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other)
		this->_fpValue = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {}

int		Fixed::getRawBits(void) const {
	return (this->_fpValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fpValue = raw;
}


Fixed::Fixed(const float f) : _fpValue(roundf(f * (1 << _fractionalBits))) {}

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

bool	Fixed::operator>(const Fixed& other) {
	if (this->toFloat() > other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& other) {
	if (this->toFloat() < other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& other) {
	if (this->toFloat() >= other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& other) {
	if (this->toFloat() <= other.toFloat())
		return (true);
	return (false);
}
	
bool	Fixed::operator==(const Fixed& other) {
	if (this->toFloat() == other.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& other) {
	if (this->toFloat() != other.toFloat())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed& other) const {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

// revisar
Fixed	Fixed::operator*(const Fixed& other) const {
	// result = this->_value * other._value;
	// result = result >> fractional_bits;
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	Fixed::operator++(int) {
	Fixed temp(*this);
	this->_fpValue++;
	return (temp);	
}

Fixed&	Fixed::operator++(void) {
	this->_fpValue++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed temp(*this);
	this->_fpValue--;
	return (temp);
}

Fixed&	Fixed::operator--(void) {
	this->_fpValue--;
	return (*this);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}
