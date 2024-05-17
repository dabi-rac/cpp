/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:38:23 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/17 17:31:35 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << this->_name << " is borne" << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " is annihialted" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    if(this->_energyPoints <= 0)
    {
        std::cout <<  this->_name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << this->_name << " mauls " << target << " exploding " << this->_attackDamage << " destructions!!!!!!" << std::endl;
    this->_energyPoints -= 1;
}