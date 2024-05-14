/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:11:42 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/13 20:44:09 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP
#include <string>
#include <iostream>
#include <fstream>


class sed
{
    private:
        std::string _input;
        std::string _output;
    public:
        sed(std::string filename);
        ~sed();
        void replace(std::string s1, std::string s2);
};











#endif