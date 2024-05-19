/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:39:49 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/18 21:59:33 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain class default constructor brain" << std::endl;
}


Brain::~Brain() {
    std::cout << "Brain class destructor brain" << std::endl;
}

Brain::Brain(const Brain &brain) {
    *this = brain;
}


void Brain::setIdea(int index, std::string idea) {
    this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
    return this->ideas[index];
}


Brain& Brain::operator=( const Brain& src )
{
    std::cout << " Brain copy called." << std::endl;
    if ( this != &src ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = src.ideas[i];
        }
    }
    return *this;
}