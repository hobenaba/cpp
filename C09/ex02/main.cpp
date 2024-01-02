/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:48:23 by mac               #+#    #+#             */
/*   Updated: 2024/01/02 18:42:39 by hobenaba         ###   ########.fr       */
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
		num = container.back();
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
	
	sortPairs(myPairs.begin() -1, myPairs.end());
	test = myPairs.begin() - 1;
	container = maxArray<T>(myPairs.begin() -1, myPairs.end());
	T save = sort(container);
	test = myPairs.begin () - 1;
	while (++test != myPairs.end())
	{
		typename T::iterator h = std::lower_bound(save.begin(), save.end(), test -> second);
		save.insert(h, test -> second);
	}
	if (status == true)
	{
		save.insert(std::lower_bound(save.begin(), save.end(), num), num);
	}
	return (save);
}
// should clean the code in this part.
//  1sec = 10e6 Usec
int main (int ac, char **av)
{
	std::vector<int> v;
	unsigned long size;
	try
	{
		if (ac <= 2)
			throw std::runtime_error("Error : ./PmergeMe <numbers to sort>");
		v = checkErrors(av + 1);
		std::cout << "Before : ";
		print(v);
		size = v.size();
		v = sort(v);
		std::cout << "After : ";
		print(v);
		std::cout << "Time to process a range of " << size 
			<< " with std::vector : " << "TIME" << " us"<< std::endl;
			//convert it to microsec ..
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}