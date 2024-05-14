/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:15:43 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 11:02:27 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>
#include <iostream>

int main(void) {
    PhoneBook book;
    std::string input = "";
    book.started();
    
    while (input.compare("EXIT") != 0) {
            std::cout << "> " << std::flush;
    std::cin >> input;
    if (input.compare("ADD") == 0)
        book.addContact();
    else if (input.compare("SEARCH") == 0) {
        book.printContacts();
        book.search();
        }
    }
    return 0;
}