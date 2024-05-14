/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:34:04 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/14 11:11:25 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void)
{
    std::string s;
    Harl harl;

    std::cout << "Choose DEBUG, INFO, WARNING, ERROR, or EXIT to exit: ";
    std::cin >> s;

    while (s != "EXIT")
    {
        harl.complain(s);
        std::cout << "Choose DEBUG, INFO, WARNING, ERROR, or EXIT to exit: ";
        std::cin >> s;
    }

    return 0;
}
