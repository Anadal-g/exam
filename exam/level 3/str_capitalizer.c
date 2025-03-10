/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:14:09 by anadal-g          #+#    #+#             */
/*   Updated: 2025/02/10 13:07:33 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes one or several strings and, for each argument,
	capitalizes the first character of each word (If it's a letter, obviously),
	puts the rest in lowercase, and displays the result on the standard output,
	followed by a \n.

	A "word" is defined as a part of a string delimited either by spaces/tabs, or
	by the start/end of the string. If a word only has one letter, it must be
	capitalized.

	If there are no arguments, the progam must display \n.
*/

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}