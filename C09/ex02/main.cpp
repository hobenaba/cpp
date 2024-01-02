/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:48:23 by mac               #+#    #+#             */
/*   Updated: 2024/01/02 16:16:13 by hobenaba         ###   ########.fr       */
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

void sortPairs(std::pair<int, int> myPairs[], int size)
{
	int j = -1;
	int tmp;
	
	while (++j < size)
	{
		if (myPairs[j].first < myPairs[j].second)
		{
			tmp = myPairs[j].first;
			myPairs[j].first = myPairs[j].second;
			myPairs[j].second = tmp;
		}
	}
}

template <typename T>

T maxArray(std::pair<int, int> myPairs[], int size)
{
	T container;

	int i = -1;
	while (++i < size)
		container.push_back(myPairs[i].first);
	return (container);
}
template <typename T>

T sort(T container)
{

	if (container.size() == 1)
		return (container);
	if ((container.size() % 2))
	{
		int num = container.back();
		(void)num;
		container.pop_back();
	}
	std::pair<int, int> myPairs[container.size() / 2];
	typename T::iterator ite = container.begin();

	int i = -1;
	while (ite != container.end())
	{
		myPairs[++i] = std::make_pair(*ite, *(ite + 1));
		ite++;
		ite++;	
	}
	sortPairs(myPairs, container.size() / 2);
	// unsigned long a = -1;
	// int j = 0;
	// while (++a < container.size() / 2)
	// {
	// 	std::cout << ++j <<  " pair : ";
	// 	std::cout << myPairs[a].first << " " << myPairs[a].second << std::endl;
	// }
	// std::cout << std::endl;
	container = maxArray<T>(myPairs, container.size() / 2);
	T save = sort(container);
	// int u = -1;
	// while (++u < container.size / 2)
	// {
	// 	// 
	// 	myPairs.lowerBound
	// }
	// typename T::iterator ju = save.begin() - 1;

	// while (++ju != save.end())
	// 	std::cout << *ju << " ";
	// std::cout << std::endl;
	exit (0);
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

		std::vector<int>::iterator ite = v.begin() -1;
		while (++ite != v.end())
			std::cout << *ite << " ";
		std::cout << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}