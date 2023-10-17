/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:11:38 by mac               #+#    #+#             */
/*   Updated: 2023/10/15 23:07:35 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

int main(int ac, char **av)
{
	std::string str;
	
	if (ac == 4)
	{
		MySed mysed(av);
		str = mysed.OpenFile();
		str = mysed.Replace(str);
		mysed.Outfile(str);
	}
	else	
		return (std::cout << "Wrong Format, Try Again" << std::endl,
			std::cout << "Format : <filename> <to_find> <replace_with>" << std::endl, 0);
}