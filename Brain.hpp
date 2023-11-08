/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:15:02 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/08 15:24:56 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    private :
        std::string ideas[100];
    public :
        Brain();
        ~Brain();
        Brain (const Brain &src);
        Brain operator=(const Brain &src);
}
#endif