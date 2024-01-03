/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:28:48 by hobenaba          #+#    #+#             */
/*   Updated: 2024/01/03 18:00:19 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    this -> l = src.l;
    this -> v = src.v;
    this ->size = src.size;

    return (*this);
}
PmergeMe::~PmergeMe()
{
    this -> l.clear();
    this -> v.clear();
}
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
void PmergeMe::maxArray(vpite begin, vpite end)
{	
    this -> v.clear();
	while (++begin != end)
		this ->v.push_back(begin -> first);
}
void PmergeMe::sorting(vp myPairs, std::vector<int> &container, int status, int num)
{
    vpite ite = myPairs.begin() - 1;
	while (++ite != myPairs.end())
	{
		vi ite2 = std::lower_bound(container.begin(), container.end(), ite -> second);
		container.insert(ite2, ite -> second);
	}
	if (status == true)
		container.insert(std::lower_bound(container.begin(), container.end(), num), num);
}
void PmergeMe::sort(std::vector<int> &container)
{
	vi ite = container.begin();
	bool status = false;
	int num = 0;
	vp myPairs;
    
	if (container.size() == 1)
		return ;
	if ((container.size() % 2))
	{
		status = true;
		num = container.back();
		container.pop_back();
	}
	while (ite != container.end())
	{
		myPairs.push_back(std::make_pair(*ite, *(++ite)));
		ite++;	
	}
	sortPairs(myPairs.begin() -1, myPairs.end());
	maxArray(myPairs.begin() -1, myPairs.end());
	sort(container);
	sorting(myPairs, container, status, num);
}
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

void PmergeMe::maxArray(lpite begin, lpite end)
{	
    this -> l.clear();
	while (++begin != end)
		this ->l.push_back(begin -> first);
}
void PmergeMe::sorting(lp myPairs, std::list<int> &container, int status, int num)
{
    lpite ite = --myPairs.begin();
	while (++ite != myPairs.end())
	{
		li ite2 = std::lower_bound(container.begin(), container.end(), ite -> second);
		container.insert(ite2, ite -> second);
	}
	if (status == true)
		container.insert(std::lower_bound(container.begin(), container.end(), num), num);
}
void PmergeMe::sort(std::list<int> &container)
{
	li ite = container.begin();
	bool status = false;
	int num = 0;
	lp myPairs;
    
	if (container.size() == 1)
		return ;
	if ((container.size() % 2))
	{
		status = true;
		num = container.back();
		container.pop_back();
	}
	while (ite != container.end())
	{
		myPairs.push_back(std::make_pair(*ite, *(++ite)));
		ite++;	
	}
	sortPairs(--myPairs.begin(), myPairs.end());
	maxArray(--myPairs.begin(), myPairs.end());
	sort(container);
	sorting(myPairs, container, status, num);
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