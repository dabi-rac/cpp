/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:10:01 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 14:51:08 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"
#include <iostream>
#include "Zombie.hpp"



int main()
{
    std::cout << "first zombie on stack" << std::endl;

    std::string name;
    
    std::cout << "zombie name:" << std::flush;
    std::cin >> name;
    Zombie zombie(name);
    
    std::cout << "second zombie oh heap" << std::endl;
    std::cout << "zombie name:" << std::flush;
    std::cin >> name;
    Zombie *zombie1 = new Zombie(name);
    zombie1->announce();
    delete zombie1;
    // zombie.announce();
    
    std::cout << "randomchump" << std::endl;
        std::cout << "zombie name:" << std::flush;
    std::cin >> name;
    randomChump(name);
    std::cout << "automatic deletes now" << std::endl;
    return(0);
}

