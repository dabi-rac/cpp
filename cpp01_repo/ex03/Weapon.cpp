/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:41:28 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 19:58:03 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    
}

const std::string &Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}

