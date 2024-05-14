/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:00:09 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 11:46:46 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>
#include <iostream>

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void PhoneBook::started() const {
    std::cout << std::endl;
    std::cout << " Welcome to Your  PhoneBook 📖" << std::endl;
    std::cout << std::endl;
    std::cout << "you can type: ADD / SEARCH / EXIT" << std::endl;
    std::cout << std::endl;
}

void PhoneBook::addContact() {
    static int i;
    _contacts[i % 8].init();
    _contacts[i % 8].setIndex(i % 8);
    i++;
}

void PhoneBook::printContacts() const {
    std::cout << "------------- PHONEBOOK -------------" << std::endl;
    for (size_t i = 0; i < 8; i++) {
        _contacts[i].view(i);
    }
    std::cout << std::endl;
}

int PhoneBook::_readInput() const {
    int input = -1;
    bool valid = false;
    do {
        std::cout << "What index you searching ? : " << std::flush;
        std::cin >> input;
        if (std::cin.good() && (input >= 0 && input <= 8)) {
            //everything went well, we'll get out of the loop and return the value
            valid = true;
        } else {
            //something went wrong, we reset the buffer's state to good
            std::cin.clear();
            //and empty it
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid index; try again" << std::endl;
        }
    } while (!valid);
    return input;
}

void PhoneBook::search() const {
    int i = _readInput();
    _contacts[i].display(i);
}
