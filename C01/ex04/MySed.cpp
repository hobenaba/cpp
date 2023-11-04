/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:19:02 by mac               #+#    #+#             */
/*   Updated: 2023/11/03 19:01:57 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

MySed::MySed(char **av)
{
	this -> filename = av[1];
	this -> s1 = av[2];
	this -> s2 = av[3];
}

std::string MySed::OpenFile()
{
	std::stringstream str;
	std::ifstream file(this -> filename);
	
	if (file.is_open())
	{
		str << file.rdbuf();
		file.close();
	}
	else
		return (std::cout << "problem occurs while opening the file" << std::endl, exit(EXIT_FAILURE), "");
	if (str.str().length() == 0)
		return (std::cout << "file is empty" << std::endl, exit(EXIT_FAILURE), "");
	return (str.str());
}

std::string MySed::Replace(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i = str.find(this -> s1, i);
		if (i == std::string::npos || this -> s1.length() == 0)
			break;
		if (i != std::string::npos)
		{
			str.erase(i, this -> s1.length());
			str.insert(i, this -> s2);
			i += this -> s2.length();
		}
	}
	return (str);
}

void MySed::Outfile(std::string str)
{
	std::ofstream outfile;
	
	outfile.open(this -> filename + ".replace");
	
	if(outfile.is_open())
		outfile << str;
	else
		std::cout << "problem occurs while opening the file" << std::endl;
}
