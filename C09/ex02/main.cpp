/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:48:23 by mac               #+#    #+#             */
/*   Updated: 2024/01/02 17:57:59 by hobenaba         ###   ########.fr       */
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
			throw std::runtime_error("invalid arguments"); //check this out
		v.push_back(num);
	}
	checkIfSorted(v);
	return (v);
}

void sortPairs(std::vector<std::pair<int, int> >::iterator begin, std::vector<std::pair<int, int> >::iterator end)
{
	int tmp;
	
	while (++begin != end)
	{
		if (begin -> first < begin -> second)
		{
			tmp = begin -> first;
			begin -> first = begin -> second;
			begin -> second = tmp;
		}
	}
}

template <typename T>

T maxArray(std::vector<std::pair<int, int> >::iterator begin, std::vector<std::pair<int, int> >::iterator end)
{
	T container;
	
	while (++begin != end)
		container.push_back(begin -> first);
	return (container);
}
template <typename T>

T sort(T container)
{
	bool status = false;
	int num = 0;
	if (container.size() == 1)
		return (container);
	if ((container.size() % 2))
	{
		status = true;
		num = container.back(); // how do i know that i do have it with bool
		container.pop_back();
	}
	std::vector<std::pair<int, int> > myPairs;
	typename T::iterator ite = container.begin();

	while (ite != container.end())
	{
		myPairs.push_back(std::make_pair(*ite, *(ite + 1)));
		ite++;
		ite++;	
	}
	
	std::vector<std::pair<int, int> >::iterator test = myPairs.begin() - 1;
	//int j = 0;
	// while (++test < myPairs.end())
	// {
	// 	std::cout << "pair " << ++j << " : ";
	// 	std::cout << (test ->first) << " " << (test -> second) << std::endl;
	// }
	sortPairs(myPairs.begin() -1, myPairs.end());
	test = myPairs.begin() - 1;
	//std::cout << "--after sorting --" << std::endl;
	// j = 0;
	// while (++test < myPairs.end())
	// {
	// 	std::cout << "pair " << ++j << " : ";
	// 	std::cout << (test ->first) << " " << (test -> second) << std::endl;
	// }
	// std::cout << std::endl;
	container = maxArray<T>(myPairs.begin() -1, myPairs.end());
	// std::cout << "my max array" << std::endl;
	// typename T::iterator t = container.begin() - 1;

	// while (++t != container.end())
	// 	std::cout << *t << std::endl;
	T save = sort(container);
	//std::cout << num << std::endl;
	//exit (0);
	test = myPairs.begin () - 1;
	//std::cout << "the real thing work\n";
	while (++test != myPairs.end())
	{
		typename T::iterator h = std::lower_bound(save.begin(), save.end(), test -> second);
		save.insert(h, test -> second);
	}
	if (status == true)
	{
		// typename T::iterator ju = save.begin() - 1;

		// while (++ju != save.end())
		// 	std::cout << *ju << " ";
		// std::cout << std::endl;
		save.insert(std::lower_bound(save.begin(), save.end(), num), num);
		// ju = save.begin() - 1;

		// while (++ju != save.end())
		// 	std::cout << *ju << " ";
		// std::cout << std::endl;
		// exit (0);
	}
	// std::vector<int>::iterator e = save.begin() -1;
	// std::cout << "what is in hier" << std::endl;
	// while (++e != save.end())
	// 	std::cout << *e << " ";
	// std::cout << std::endl;
	//typename T::iterator ju = save.begin() - 1;

	// while (++ju != save.end())
	// 	std::cout << *ju << " ";
	// std::cout << std::endl;
	return (save);
}
// i ll clean the code later on.
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
		// std::vector<int>::iterator ite = v.begin() -1;
		// while (++ite != v.end())
		// 	std::cout << *ite << " ";
		// std::cout << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}