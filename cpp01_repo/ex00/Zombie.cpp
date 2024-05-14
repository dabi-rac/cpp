/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:09:50 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 14:28:29 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
std::cout << this->name << " was annihilated" << std::endl;
}

void  Zombie::announce( void )
    {
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }