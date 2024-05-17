/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:38:32 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/17 18:32:36 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor got used right here" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Fragtrap constructor called and new fragtrap  called created" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

void   FragTrap::highFivesGuys(void)
{
    std::cout << "Fragtrap " << this->_name << " is asking for a high five" << std::endl;
}

void    FragTrap::attack(std::string const& target)
{
    if(this->_energyPoints <= 0)
    {
        std::cout <<  this->_name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
}