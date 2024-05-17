/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:41:20 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/17 17:29:19 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
     std::cout  << "ClapTrap " <<  this->_name  << "created" << std::endl;
    
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

ClapTrap::ClapTrap(const ClapTrap& otherClapTrap)
{
    *this = otherClapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& otherClapTrap)
{
    this->_name = otherClapTrap._name;
    this->_hitPoints = otherClapTrap._hitPoints;
    this->_energyPoints = otherClapTrap._energyPoints;
    this->_attackDamage = otherClapTrap._attackDamage;
    return *this;
}

int ClapTrap::getHitPoints(void)
{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints(void)
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage(void)
{
    return this->_attackDamage;
}
