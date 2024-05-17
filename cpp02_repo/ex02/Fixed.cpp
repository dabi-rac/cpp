/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:03:12 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/17 10:05:31 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int Fixed::getRawBits(void) const {
    return this->_Value;
}

void Fixed::setRawBits(int const raw) {
this->_Value = raw;
}



Fixed::Fixed()
 {
    // std::cout << "Default ccosntr. used" << std::endl;
    this->_Value = 0;
    
 }


Fixed& Fixed::operator=(const Fixed &anotherFixedpoint) {
        // std::cout << "Copy assignment operator used" << std::endl;
    if (this != &anotherFixedpoint) {
        this->_Value = anotherFixedpoint.getRawBits();
    }
    return *this;
}


Fixed::Fixed(const Fixed &anotherFixedpoint) {
    // std::cout << "Copy consr. used" << std::endl;
    this->setRawBits(anotherFixedpoint.getRawBits());
}



Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    // std::cout << "Int constructor used" << std::endl;
    this->_Value = value << this->_Bits;
}

Fixed::Fixed(const float value) {
    // std::cout << "Float constructor used" << std::endl;
    this->_Value = roundf(value * (1 << this->_Bits));
}

float Fixed::toFloat( void ) const {
    return (float)this->_Value / (1 << this->_Bits);
}

int Fixed::toInt( void ) const {
    return this->_Value >> this->_Bits;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}

bool Fixed::operator>(const Fixed &anotherFixedpoint) const {
    return this->_Value > anotherFixedpoint.getRawBits();
}

bool Fixed::operator<(const Fixed &anotherFixedpoint) const {
    return this->_Value < anotherFixedpoint.getRawBits();
}

bool Fixed::operator>=(const Fixed &anotherFixedpoint) const {
    return this->_Value >= anotherFixedpoint.getRawBits();
}

bool Fixed::operator<=(const Fixed &anotherFixedpoint) const {
    return this->_Value <= anotherFixedpoint.getRawBits();
}

bool Fixed::operator==(const Fixed &anotherFixedpoint) const {
    return this->_Value == anotherFixedpoint.getRawBits();
}

bool Fixed::operator!=(const Fixed &anotherFixedpoint) const {
    return this->_Value != anotherFixedpoint.getRawBits();
}

Fixed Fixed::operator+(const Fixed &anotherFixedpoint) const {
    return Fixed(this->toFloat() + anotherFixedpoint.toFloat());
}

Fixed Fixed::operator-(const Fixed &anotherFixedpoint) const {
    return Fixed(this->toFloat() - anotherFixedpoint.toFloat());
}

Fixed Fixed::operator*(const Fixed &anotherFixedpoint) const {
    return Fixed(this->toFloat() * anotherFixedpoint.toFloat());
}


Fixed Fixed::operator/(const Fixed &anotherFixedpoint) const {
    return Fixed(this->toFloat() / anotherFixedpoint.toFloat());
}

Fixed& Fixed::operator++() {
    this->_Value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator--() {
    this->_Value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return a > b ? a : b;
}
