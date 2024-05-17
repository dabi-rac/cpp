/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:41:24 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/17 17:32:53 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main(void)
{
    ScavTrap    mario("mario");
    ScavTrap    gino("gino");
    ClapTrap    clap("clap");
    mario.attack("gino");
    clap.attack("gino");

    gino.takeDamage(20);
    gino.beRepaired(5);
    mario.takeDamage(8);
    
    mario.guardGate();
    mario.guardGate();

    gino.guardGate();
    
    
    
    return 0;
}