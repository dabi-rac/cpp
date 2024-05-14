/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:41:25 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 19:56:15 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>
class Weapon
{
private:
    std::string type;
public:
const std::string &getType() const;
void  setType( std::string newType );


Weapon(std::string type);
~Weapon();
};

#endif