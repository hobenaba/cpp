/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:48:36 by mac               #+#    #+#             */
/*   Updated: 2024/01/03 15:49:14 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <ctime>
#include <list>

#define lpite std::list<std::pair<int, int> >::iterator
#define vpite std::vector<std::pair<int, int> >::iterator
#define vp std::vector<std::pair<int, int> >
#define vi std::vector<int>::iterator
#define li std::list<int>::iterator
#define lp std::list<std::pair<int, int> >

//add canonical form;
class PmergeMe 
{
    private:
        std::vector<int>	v;
	    std::list<int>		l;
	    int	size;
        void maxArray(vpite begin, vpite end);
        void sortPairs(lpite begin, lpite end);
        void sortPairs(vpite begin, vpite end);
        void maxArray(lpite begin, lpite end);
        void sorting(vp myPairs, std::vector<int> &container, int status, int num);
        void sorting(lp myPairs, std::list<int> &container, int status, int num);
    public:
        PmergeMe(char **av);
        int             &getSize();
        std::vector<int> &getFirstContainer();
        std::list<int> &getSecondContainer();
        void sort(std::vector<int> &container);
        void sort(std::list<int> &container);
};

