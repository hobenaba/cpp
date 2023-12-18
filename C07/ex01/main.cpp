/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:26:48 by hobenaba          #+#    #+#             */
/*   Updated: 2023/12/18 12:50:38 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>

void addOne(T x)
{
    std::cout << x + 1 << std::endl;
}

template <typename T>

void print(T x)
{
    std::cout << x << std::endl;
}

int main ()
{
    int arr[] = {1, 2, 3, 4, 5};
    ::iter<int, int>(arr, 5, addOne);
    
    std::string str[] = {"hi", "its", "me"};
    ::iter<std::string, std::string>(str, 3, print);
}

// class Awesome
// {
//     public:
//         Awesome( void ) : _n( 42 ) { return; }
//         int get( void ) const { return this->_n; }
//     private:
//         int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 };
//     Awesome tab2[5];
//     iter( tab, 5, print<const int>);
//     iter( tab2, 5, print<const Awesome>);
//     return 0;
// }
