/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:07:33 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 20:50:11 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "invalid arguments number" << std::endl;
        return (1);
    }
    else{
        sed sed_filename(av[1]);
        sed_filename.replace(av[2], av[3]);
    }

    return 0;
}