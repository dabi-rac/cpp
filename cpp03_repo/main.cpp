/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:41:24 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/17 14:27:20 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main(void)
{
    ClapTrap    mario("mario");
    ClapTrap    gino("gino");

    mario.attack("gino");
    gino.takeDamage(5);
    gino.beRepaired(5);
    mario.takeDamage(8);
    mario.beRepaired(5);
    mario.takeDamage(20);
    mario.attack("gino");
    mario.Announce();
    gino.Announce();
    
    
    
    return 0;
}