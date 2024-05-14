/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:09:47 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 14:49:24 by dabi-rac         ###   ########.fr       */
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
    Zombie(std::string name);
    ~Zombie();
    void randomChump(std::string name);
};
void randomChump( std::string name );

#endif