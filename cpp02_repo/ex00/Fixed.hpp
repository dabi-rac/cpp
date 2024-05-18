/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:51:33 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/16 18:44:10 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _Value;
    static const int _Bits = 8;

public:
    Fixed(); // Default constructor
    Fixed(const Fixed &anotherFixedpoint); // Copy constructor
    Fixed& operator=(const Fixed &anotherFixedpoint); // Copy assignment operator
    ~Fixed(); // Destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);
};



#endif