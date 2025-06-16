/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:48:58 by anadal-g          #+#    #+#             */
/*   Updated: 2025/01/10 10:51:08 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	Write a program that takes a single string in snake_case format
	and converts it into a string in lowerCamelCase format.

	A snake_case string is a string where each word is in lower case, separated by
	an underscore "_".

	A lowerCamelCase string is a string where each word begins with a capital letter
	except for the first one.

*/

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] == '_')
			{
				i++;
				argv[1][i] = argv[1][i] - 32;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
