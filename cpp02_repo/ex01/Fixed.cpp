/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:26:45 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/17 09:20:40 by dabi-rac         ###   ########.fr       */
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



Fixed::Fixed(void)
 {
    std::cout << "Default ccosntr. used" << std::endl;
    this->_Value = 0;
    
 }


Fixed& Fixed::operator=(const Fixed &anotherFixedpoint) {
        std::cout << "Copy assignment operator used" << std::endl;
    if (this != &anotherFixedpoint) {
        this->_Value = anotherFixedpoint.getRawBits();
    }
    return *this;
}


Fixed::Fixed(const Fixed &anotherFixedpoint) {
    std::cout << "Copy consr. used" << std::endl;
    this->setRawBits(anotherFixedpoint.getRawBits());
}



Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor used" << std::endl;
    this->_Value = value << this->_Bits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor used" << std::endl;
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

