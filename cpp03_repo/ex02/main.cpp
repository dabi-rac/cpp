/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:41:24 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/17 18:39:05 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    ScavTrap    mario("mario");
    ScavTrap    gino("gino");
    ClapTrap    clap("clap");
    FragTrap    frag("frag");
    
    frag.attack("gino");
    gino.takeDamage(20);
    mario.attack("gino");
    clap.attack("gino");
    
    frag.Announce();
    mario.Announce();
    clap.Announce();
    
    frag.highFivesGuys();

    return 0;
};