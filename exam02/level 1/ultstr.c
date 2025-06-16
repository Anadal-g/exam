/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:46:24 by anadal-g          #+#    #+#             */
/*   Updated: 2025/01/10 10:44:02 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string and reverses the case of all its letters.
	Other characters remain unchanged.

	You must display the result followed by a '\n'.

	If the number of arguments is not 1, the program displays '\n'.

*/

#include <unistd.h>

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int		i;

		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			i++;
		}
		i = 0;
		while (argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}