/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:33:14 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 22:31:14 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(std::string type);
        virtual ~Dog();
        Dog(const Dog &dog);
        Dog &operator=(const Dog &dog);
        void makeSound() const;
        
        
        private:
    Brain   *_brain;
};

#endif

