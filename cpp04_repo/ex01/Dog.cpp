/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:33:15 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 19:06:33 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") , _brain(new Brain()) {
    std::cout << "Dog class default constructor dog" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
    std::cout << "Dog derived class constructor dog" << std::endl;
}


Dog::~Dog() {
    std::cout << "Dog derived class  destructor dog" << std::endl;
    delete _brain;
}

Dog::Dog(const Dog &dog) {
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
    this->type = dog.type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog derived class class sound BAU" << std::endl;
}





