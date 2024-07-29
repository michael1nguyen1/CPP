/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linhnguy <linhnguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:02:49 by linhnguy          #+#    #+#             */
/*   Updated: 2024/07/29 20:26:06 by linhnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int c, char **v)
{
	if (c > 1)
	{
		for (int i = 1; v[i]; i++)
		{
			std::string str = v[i];
			for (auto& c : str) 
				c = std::toupper(c);
			std::cout << str << ' ';
		}
		std::cout << std::endl;
	}
    return (0);
}
