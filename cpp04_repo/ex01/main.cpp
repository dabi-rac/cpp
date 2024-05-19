/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:11:07 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 22:18:01 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main() {
    Animal* collection[10];

    for(int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            collection[i] = new Dog();
        } else {
            collection[i] = new Cat();
        }
    }
    
    for(int i = 0; i < 10; i++) {
        delete collection[i];
    }
    return 0;
}


