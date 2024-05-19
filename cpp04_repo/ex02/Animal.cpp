/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:11:04 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 22:39:47 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
 

Animal::Animal() : type("Animal") {
    std::cout << "Animal  base class  default constructor initialized" << std::endl;
}


Animal::Animal(std::string type) : type(type) {
    std::cout << "Animal  base class  constructor initialized" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal  base class destructor initialized" << std::endl;
}

Animal::Animal(const Animal &animal) {
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
    this->type = animal.type;
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

