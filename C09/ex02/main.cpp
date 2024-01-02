/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:48:23 by mac               #+#    #+#             */
/*   Updated: 2024/01/01 15:25:08 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>

void print(T container)
{
	typename T::iterator ite = container.begin() - 1;

	while (++ite != container.end())
	{
		if (ite != container.begin())
			std::cout << ' ';
		std::cout << *ite;
	}
	std::cout << std::endl;
}

void checkIfSorted(std::vector<int> container)
{
	std::vector<int>::iterator ite = container.begin();
	std::vector<int>::iterator jte = ite + 1;
	unsigned long i = 0;
	while (jte != container.end())
	{
		if (*ite++ <= *jte)
			i++;
		jte = ite + 1;
	}
	if (i + 1 == container.size())
		throw std::runtime_error("Error : Numbers already sorted");
}
std::vector<int> checkErrors(char **av)
{
	int i = -1;
	double num;
	char *ptr;
	std::vector <int> v;
	
	while (av[++i])
	{
		num = strtod(av[i], &ptr);
		if (static_cast<int>(num) != num || num < 0 || *ptr)
			throw std::runtime_error("invalid arguments");
		v.push_back(num);
	}
	checkIfSorted(v);
	return (v);
}
template <typename T>

T sort(T container)
{
	if (!(container.size() % 2))
		std::cout << "pair numbers" << std::endl;
	else
		std::cout << "odd numbers" << std::endl;
	return (container);
}
int main (int ac, char **av)
{
	(void)av;
	std::vector<int> v;
	try
	{
		if (ac <= 2)
			throw std::runtime_error("Error : ./PmergeMe <numbers to sort>");
		v = checkErrors(av + 1);
		std::cout << "Before : ";
		print(v);
		sort(v);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
