/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:28:48 by hobenaba          #+#    #+#             */
/*   Updated: 2024/01/03 15:33:07 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int> &PmergeMe::getFirstContainer()
{
    return (this -> v);
}
std::list<int> &PmergeMe::getSecondContainer()
{
    return (this -> l);
}
int &PmergeMe::getSize()
{
    return (this -> size);
}
PmergeMe::PmergeMe(char **av)
{
    int size = 0;
    int i = -1;
	double num;
	char *ptr;
    int j;
    
	while (av[++i])
	{
        j = i + 1;
		num = strtod(av[i], &ptr);
        //check on potentiel errors.
		if (static_cast<int>(num) != num ||  *ptr)
			throw std::runtime_error("Error: invalid arguments");
        else if (num < 0)
            throw std::runtime_error("Error : negative number");
        // to store in my data.
		this -> v.push_back(num);
        this -> l.push_back(num);
        // this part to check if sorted.
        if (av[j] && num <= strtod(av[j], NULL))
            size++;
    }
    this -> size = v.size();
    if (size + 1 == this -> size)
        	throw std::runtime_error("Error : Numbers already sorted");
}
void PmergeMe::sortPairs(lpite begin, lpite end)
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
std::vector<int> PmergeMe::maxArray(vpite begin, vpite end)
{
	std::vector<int> container;
	
	while (++begin != end)
		container.push_back(begin -> first);
	return (container);
}

void PmergeMe::sort(std::vector<int> &container)
{
	bool status = false;
	int num = 0;
    
	if (container.size() == 1)
		return ;
	if ((container.size() % 2))
	{
		status = true;
		num = container.back();
		container.pop_back();
	}
    
	vp myPairs;
	vi ite = container.begin();

	while (ite != container.end())
	{
		myPairs.push_back(std::make_pair(*ite, *(++ite)));
		ite++;	
	}
	vpite test = myPairs.begin() - 1;
	
	sortPairs(myPairs.begin() -1, myPairs.end());
	test = myPairs.begin() - 1;
	container = maxArray(myPairs.begin() -1, myPairs.end());
	sort(container);
	test = myPairs.begin () - 1;
	while (++test != myPairs.end())
	{
		vi h = std::lower_bound(container.begin(), container.end(), test -> second);
		container.insert(h, test -> second);
	}
	if (status == true)
		container.insert(std::lower_bound(container.begin(), container.end(), num), num);
}

// std::list<int> maxArray(lpite begin, lpite end)
// {
// 	std::list<int> container;
	
// 	while (++begin != end)
// 		container.push_back(begin -> first);
// 	return (container);
// }

void PmergeMe::sortPairs(vpite begin, vpite end)
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

// void sort(std::list<int> &container)
// {
// 	bool status = false;
// 	int num = 0;
// 	if (container.size() == 1)
// 		return ;
// 	if ((container.size() % 2))
// 	{
// 		status = true;
// 		num = container.back();
// 		container.pop_back();
// 	}
// 	std::list<std::pair<int, int> > myPairs;
// 	std::list<int>::iterator ite = container.begin();
// 	while (ite != container.end())
// 	{
// 		myPairs.push_back(std::make_pair(*ite, *(++ite)));
// 		ite++;
// 	}
// 	lpite test = --myPairs.begin();
	
// 	sortPairs(--myPairs.begin(), myPairs.end());
// 	container = maxArray(--myPairs.begin(), myPairs.end());
// 	sort(container);
// 	test = --myPairs.begin ();
// 	while (++test != myPairs.end())
// 	{
// 		std::list<int>::iterator h = std::lower_bound(container.begin(), container.end(), test -> second);
// 		container.insert(h, test -> second);
// 	}
// 	if (status == true)
// 		container.insert(std::lower_bound(container.begin(), container.end(), num), num);
// }
