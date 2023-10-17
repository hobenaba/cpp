/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:19:02 by mac               #+#    #+#             */
/*   Updated: 2023/10/15 23:24:57 by mac              ###   ########.fr       */
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
	char c;
	
	if (file.is_open())
	{
		while(file.get(c))
			str << c;
		file.close();
	}
	else
		return (std::cout << "problem occurs while opening the file" << std::endl, exit(EXIT_FAILURE), "");
	return (str.str());
}

std::string MySed::Replace(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i = str.find(this -> s1);
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
	std::ofstream output;
	
	output.open(this -> filename + ".replace");
	//std::cout << "imhier\n";
	if (output.is_open())
		output << str;
	else
		std::cout << "problem occurs while opening the file" << std::endl;
}
