/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:31:20 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 16:40:06 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    unsigned long N;
    std::cout << "how many zombies are in your horde ? " << std::flush;
    std::cin >> N;
    Zombie *zombis = zombieHorde( N, "zombey" );
    
    size_t f = 0;
    while(f < N)
    {
        zombis[f].announce();
        f++;
    }
    
    delete [] zombis;
    return 0;
}