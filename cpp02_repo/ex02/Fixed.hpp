/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:03:10 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/16 20:11:27 by dabi-rac         ###   ########.fr       */
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
    
    bool operator>(const Fixed &anotherFixedpoint) const;
    bool operator<(const Fixed &anotherFixedpoint) const;
    bool operator>=(const Fixed &anotherFixedpoint) const;
    bool operator<=(const Fixed &anotherFixedpoint) const;
    bool operator==(const Fixed &anotherFixedpoint) const;
    bool operator!=(const Fixed &anotherFixedpoint) const;

    Fixed operator+(const Fixed &anotherFixedpoint) const;
    Fixed operator-(const Fixed &anotherFixedpoint) const;
    Fixed operator*(const Fixed &anotherFixedpoint) const;
    Fixed operator/(const Fixed &anotherFixedpoint) const;
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
};


std::ostream & operator<<( std::ostream & o, Fixed const & i );


#endif