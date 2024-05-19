/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:41:20 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 20:29:24 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout  << this->_name << " is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_energyPoints <= 0)
    {
        std::cout <<  this->_name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout  << this->_name << " takes " << amount << " points of damage!" << std::endl;
    this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout  << this->_name << " is repaired for " << amount << " points of health!" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints -=1;
}

void ClapTrap::Announce(void)
{
    if(this->_hitPoints <= 0)
    {
        std::cout  << this->_name << " is dead!" << std::endl;
        return;
    }
    std::cout  << this->_name << " has " << this->_hitPoints << " points of health!"    << std::endl;

}