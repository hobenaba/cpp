/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:00:49 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/07 17:15:59 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.hpp"

Base::~Base()
{
    std::cout << "destructor called" << std::endl;
}

Base *generate(void)
{
    srand(time(NULL));
    int a = rand();
    
    if (a % 5 == 0)
        return (std::cout << "c\n", new C);
    else if (a % 3 == 0)
        return (std::cout << "b\n", new B);
    else
        return (std::cout << "a\n", new A);
    return (NULL);
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
// void identify(Base &p);

