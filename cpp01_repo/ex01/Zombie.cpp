/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:31:19 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 16:26:44 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
}

Zombie::~Zombie()
{std::cout <<this->name << " is dead" << std::endl;
}

void    Zombie::setName( std::string name ){
this->name = name;
}

void    Zombie::announce( void ) {
    std::cout<<this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}