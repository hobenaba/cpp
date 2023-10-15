/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:11:52 by mac               #+#    #+#             */
/*   Updated: 2023/10/15 23:02:06 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSED_HPP
#define MYSED_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class MySed
{
	private:
		std::string filename;
		std::string s1;
		std::string s2;	
	public:
		MySed(char **av);
		std::string OpenFile();
		std::string Replace(std::string str);
		void		Outfile(std::string str);
};

#endif