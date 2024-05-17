/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:41:23 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/17 14:20:50 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
class ClapTrap
{
    private:
        std::string     _name;
        int             _hitPoints;
        int             _energyPoints;
        int             _attackDamage;
        
        public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& otherClapTrap);
        void Announce(void);

};

#endif