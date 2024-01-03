/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:48:23 by mac               #+#    #+#             */
/*   Updated: 2024/01/03 15:52:04 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>

void print(T container)
{
	typename T::iterator ite = --container.begin();

	while (++ite != container.end())
	{
		if (ite != container.begin())
			std::cout << ' ';
		std::cout << *ite;
	}
	std::cout << std::endl;
}

int main (int ac, char **av)
{
	try
	{
		if (ac <= 2)
			throw std::runtime_error("Error : ./PmergeMe <numbers to sort>");
		PmergeMe s(av + 1);
		std::cout << "Before : ";
		print(s.getFirstContainer());
		clock_t start = clock();
		s.sort(s.getFirstContainer());
		clock_t end = clock();
		std::cout << "After : ";
		print(s.getFirstContainer());
		std::cout << "Time to process a range of " << s.getSize() 
		<< " with std::vector : " << (static_cast<double>(end -start)/CLOCKS_PER_SEC)
		* 1000000 << " us"<< std::endl;
		start = clock();
		s.sort(s.getSecondContainer());
		end = clock();
		std::cout << "Time to process a range of " << s.getSize()
		<< " with std::list : " << (static_cast<double>(end -start)/CLOCKS_PER_SEC)
		* 1000000 << " us"<< std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}