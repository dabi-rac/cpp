/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:11:06 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 18:01:41 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
    protected:
        std::string type;
        
    public:
        Animal(void);
        Animal(std::string type);
        virtual ~Animal();
        Animal(const Animal &animal);
        Animal &operator=(const Animal &animal);
        std::string getType() const;
        virtual void makeSound() const;
};

#endif