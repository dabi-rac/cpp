/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:41:38 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 17:44:23 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "WrongCat default constructor called wrongcat" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    std::cout << "WrongCat constructor called wrongcat" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called wrongcat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) {
    *this = wrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
    this->_type = wrongCat._type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound WrongMIAO" << std::endl;
}

