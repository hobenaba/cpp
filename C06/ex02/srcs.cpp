/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:00:49 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/13 17:40:29 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.hpp"

Base::~Base()
{
    //std::cout << "base destructor called" << std::endl;
}

Base *generate(void)
{
    srand(time(NULL));
    int a = rand();
    
    if (a % 5 == 0)
        return (std::cout << "C class was generated" << std::endl, new C);
    else if (a % 3 == 0)
        return (std::cout << "B class was generated" << std::endl, new B);
    return (std::cout << "A class was generated" << std::endl, new A);
}

void identify(Base *p)
{
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    
    if (a != NULL)
        std::cout << "A" << std::endl;
    else if (b != NULL)
        std::cout << "B" << std::endl;
    else if (c != NULL)
        std::cout << "C" << std::endl;
}
void identify(Base &p)
{
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } 
    catch(std::exception &e){};
    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::exception &e){};
    try {
        C c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::exception &e){};
}

