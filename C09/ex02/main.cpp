/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:48:23 by mac               #+#    #+#             */
/*   Updated: 2024/01/03 14:25:37 by hobenaba         ###   ########.fr       */
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

void sortPairs(std::list<std::pair<int, int> >::iterator begin, std::list<std::pair<int, int> >::iterator end)
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
std::vector<int> maxArray(std::vector<std::pair<int, int> >::iterator begin, std::vector<std::pair<int, int> >::iterator end)
{
	std::vector<int> container;
	
	while (++begin != end)
		container.push_back(begin -> first);
	return (container);
}

std::vector<int> sort(std::vector<int> container)
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
	std::vector<int>::iterator ite = container.begin();

	while (ite != container.end())
	{
		myPairs.push_back(std::make_pair(*ite, *(ite + 1)));
		ite++;
		ite++;	
	}
	std::vector<std::pair<int, int> >::iterator test = myPairs.begin() - 1;
	
	sortPairs(myPairs.begin() -1, myPairs.end());
	test = myPairs.begin() - 1;
	container = maxArray(myPairs.begin() -1, myPairs.end());
	std::vector<int> save = sort(container);
	test = myPairs.begin () - 1;
	while (++test != myPairs.end())
	{
		std::vector<int>::iterator h = std::lower_bound(save.begin(), save.end(), test -> second);
		save.insert(h, test -> second);
	}
	if (status == true)
	{
		save.insert(std::lower_bound(save.begin(), save.end(), num), num);
	}
	return (save);
}
std::list<int> maxArray(std::list <std::pair<int, int> >::iterator begin, std::list <std::pair<int, int> >::iterator end)
{
	std::list<int> container;
	
	while (++begin != end)
		container.push_back(begin -> first);
	return (container);
}

std::list<int> sort(std::list<int> container)
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
	std::list<std::pair<int, int> > myPairs;
	std::list<int>::iterator ite = container.begin();
	while (ite != container.end())
	{
		myPairs.push_back(std::make_pair(*ite, *(++ite)));
		ite++;
	}
	std::list<std::pair<int, int> >::iterator test = --myPairs.begin();
	
	sortPairs(--myPairs.begin(), myPairs.end());
	container = maxArray(--myPairs.begin(), myPairs.end());
	std::list<int> save = sort(container);
	test = --myPairs.begin ();
	while (++test != myPairs.end())
	{
		std::list<int>::iterator h = std::lower_bound(save.begin(), save.end(), test -> second);
		save.insert(h, test -> second);
	}
	if (status == true)
	{
		save.insert(std::lower_bound(save.begin(), save.end(), num), num);
	}
	
	return (save);
}

int main (int ac, char **av)
{
	std::vector<int>	v;
	std::list<int>		l;
	int	size;
	try
	{
		if (ac <= 2)
			throw std::runtime_error("Error : ./PmergeMe <numbers to sort>");
		
		v = checkErrors(av + 1);

		std::vector<int>::iterator ite = v.begin() - 1;
		while (++ite != v.end())
			l.push_back(*ite);
		std::cout << "Before : ";
		print(v);
		size = v.size();
		clock_t start = clock();
		v = sort(v);
		clock_t end = clock();
		std::cout << "After : ";
		print(v);
		std::cout << "Time to process a range of " << size 
			<< " with std::vector : " << (static_cast<double>(end -start)/CLOCKS_PER_SEC)
			* 1000000 << " us"<< std::endl;
		start = clock();
		l = sort(l);
		end = clock();
		std::cout << "Time to process a range of " << size 
		<< " with std::list : " << (static_cast<double>(end -start)/CLOCKS_PER_SEC)
		* 1000000 << " us"<< std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
//clean the code later on
//`jot -r 3000 1 1000 | tr '\n' ' '`