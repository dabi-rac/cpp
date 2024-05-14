/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:34:02 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/14 11:53:19 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void)
{
    std::cout << "I love having extra debugging" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I love having extra info" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I love having extra warning" << std::endl;
}

void Harl::error(void)
{
    std::cout << "I love having extra error" << std::endl;
}

void Harl::complain(std::string level) {
    t_func funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for (i = 0; i < 4 && levels[i].compare(level); i++);
    if (i < 4)
        (this->*funcs[i])();
}

