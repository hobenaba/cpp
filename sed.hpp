/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:11:45 by hobenaba          #+#    #+#             */
/*   Updated: 2023/10/13 18:49:03 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Sed {
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        Sed(char **av);
        std::string OpenFile(); 
};

#endif