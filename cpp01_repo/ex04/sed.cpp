/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:11:41 by dabi-rac          #+#    #+#             */
/*   Updated: 2024/05/14 10:07:56 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

sed::sed(std::string filename)
{
    this->_input = filename;
    this->_output = filename + ".replaced";
}

sed::~sed(void)
{
}

void sed::replace(std::string s1, std::string s2)
{
    std::ifstream file(this->_input.c_str());
    std::ofstream output(this->_output.c_str());
    std::string line;

    if (!file.is_open())
    {
        std::cerr << "Error: could not open file" << std::endl;
        return;
    }

    size_t s1Len = s1.length();

    while (std::getline(file, line))
    {
        size_t pos = 0;
        size_t found;

        while ((found = line.find(s1, pos)) != std::string::npos)
        {
            // Replace s1 with s2
            line = line.substr(0, found) + s2 + line.substr(found + s1Len);

            pos = found + s2.length();
        }
        output << line << std::endl;
    }

    file.close();
    output.close();
}

