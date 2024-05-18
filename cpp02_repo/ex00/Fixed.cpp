/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:51:29 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/16 19:09:59 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const {
      std::cout << "getRawBits func used" << std::endl;
    return this->_Value;
}

void Fixed::setRawBits(int const raw) {
this->_Value = raw;
}



Fixed::Fixed()
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

