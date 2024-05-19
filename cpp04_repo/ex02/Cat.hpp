/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:35:35 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 18:49:58 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(std::string type);
        virtual ~Cat();
        Cat(const Cat &cat);
        Cat &operator=(const Cat &cat);
        void makeSound() const;
        
    private:
    Brain   *_brain;
};


#endif