/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:41:33 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 19:47:06 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;  
}


void HumanA::attack()
{
    std::cout << this->name << " whips out their" << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}

