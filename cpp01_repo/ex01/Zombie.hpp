/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:31:17 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 16:36:10 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    private:
    std::string name;
    public:
    void announce( void );
    Zombie();
    ~Zombie();
    void setName( std::string name );
};

 Zombie* zombieHorde( int N, std::string name );
#endif