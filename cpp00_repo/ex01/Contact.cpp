/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:34:26 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/15 19:59:33 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::init(void) {
    std::cin.ignore();
    this->_firstName = this->_getInput("First name: ");
    this->_lastName = this->_getInput("Last name: ");
    this->_nickname = this->_getInput("nickname: ");
    this->_phoneNumber = this->_getInput("phoneNumber: ");
    this->_darkestSecret = this->_getInput(" ⚠️?darkest secret?⚠️: ");
    std::cout << std::endl;
}



std::string Contact::_getInput(std::string str) const {
    std::string input = "";
    bool        valid = false;
    do
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Invalid input; insert again" << std::endl;
        }
    } while (!valid);
    return (input);
}

void    Contact::setIndex(int i) {
    this->_index = i;
}

std::string Contact::_printLen(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::display(int index) const {
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty() || this->_phoneNumber.empty() || this->_darkestSecret.empty())
        return ;
    std::cout << std::endl;
    std::cout << "CONTACT #" << index << std::endl;
    std::cout << "First Name:\t" << this->_firstName << std::endl;
    std::cout << "Last Name:\t" << this->_lastName << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << "Phone number:\t" << this->_phoneNumber << std::endl;
    std::cout << "⚠️?darkest secret?⚠️:\t" << this->_darkestSecret << std::endl;
    std::cout << std::endl;
}

void    Contact::view(int index) const {
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty() || this->_phoneNumber.empty() || this->_darkestSecret.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_nickname) << std::flush;
    // std::cout << "|" << std::setw(10) << this->_printLen(this->_phoneNumber) << std::flush;
    // std::cout << "|" << std::setw(10) << this->_printLen(this->_darkestSecret) << std::flush;
    std::cout << "|" << std::endl;
}



Contact::Contact()
{
}

Contact::~Contact()
{
}