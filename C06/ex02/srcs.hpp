/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:57:57 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/07 17:00:44 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base {
    public:
        virtual ~Base();
};

class A : public Base {
    
};

class B : public Base {
    
};

class C : public Base {
    
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

