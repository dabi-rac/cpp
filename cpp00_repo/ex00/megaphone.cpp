/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:27:39 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/10 12:07:23 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if(ac > 1)
    {
        for(int i = 1;av[i]; i++)
        {
            
            for(int x = 0; av[i][x]; x++)
                std::cout << (char) toupper(av[i][x]);
            std::cout << (i < ac - 1 ? ' ' : '\0');

        }
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEBACK NOISE *";
    }
    std::cout << "\n";
    return (0);
}
