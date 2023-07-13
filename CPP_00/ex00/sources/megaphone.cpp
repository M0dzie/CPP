/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:51:23 by thmeyer           #+#    #+#             */
/*   Updated: 2023/07/13 02:02:03 by thmeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
	for (int i = 1; argv[i]; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] -= 32;
			std::cout << argv[i][j];
		}
		if (!argv[i + 1])
			std::cout << "\n";
	}
	return (0);
}