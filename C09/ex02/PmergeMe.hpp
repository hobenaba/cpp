/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:48:36 by mac               #+#    #+#             */
/*   Updated: 2024/01/03 15:29:58 by hobenaba         ###   ########.fr       */
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

//add canonical form;
class PmergeMe 
{
    private:
        std::vector<int>	v;
	    std::list<int>		l;
	    int	size;
        std::vector<int> maxArray(vpite begin, vpite end);
        std::list<int> maxArray(lpite begin, lpite end);
        void sortPairs(lpite begin, lpite end);
        void sortPairs(vpite begin, vpite end);
    public:
        PmergeMe(char **av);
        int             &getSize();
        std::vector<int> &getFirstContainer();
        std::list<int> &getSecondContainer();
        void sort(std::vector<int> &container);
        void sort(std::list<int> &container);
};

