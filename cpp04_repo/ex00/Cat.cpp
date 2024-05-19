/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:35:37 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 17:47:51 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << "Cat derived class default constructor initialized cat " << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << "Cat derived class constructor cat " << std::endl;
}


Cat::~Cat() {
    std::cout << "Cat derived class  destructor cat" << std::endl;
    
    }
    
Cat::Cat(const Cat &cat) {
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
    this->type = cat.type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat derived class class sound MIAO " << std::endl;
}

