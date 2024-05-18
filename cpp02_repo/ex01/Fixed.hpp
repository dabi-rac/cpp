/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:26:39 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/16 19:38:49 by dabi-rac         ###   ########.fr       */
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
    Fixed(const int value); // Parametric constructor
    Fixed(const float value); // Parametric constructor
    
    Fixed(const Fixed &anotherFixedpoint); // Copy constructor
    Fixed& operator=(const Fixed &anotherFixedpoint); // Copy assignment operator
    ~Fixed(); // Destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);
    
        float   toFloat( void ) const;
    int     toInt( void ) const;
};


std::ostream & operator<<( std::ostream & o, Fixed const & i );


#endif