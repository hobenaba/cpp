/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:05:51 by hobenaba          #+#    #+#             */
/*   Updated: 2023/11/26 18:31:33 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern 
{
    public:
        Intern();
        Intern(const Intern &src);
        ~Intern();

        Intern &operator=(const Intern &src);
        Form *makeForm(std::string form, std::string target);
};

#endif