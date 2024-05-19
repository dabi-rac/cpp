/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:35:35 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 17:47:25 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(std::string type);
        virtual ~Cat();
        Cat(const Cat &cat);
        Cat &operator=(const Cat &cat);
        void makeSound() const;
};


#endif