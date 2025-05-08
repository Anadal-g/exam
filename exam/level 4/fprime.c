/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:34:27 by anadal-g          #+#    #+#             */
/*   Updated: 2025/05/07 17:43:36 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
	Write a program that takes a positive int and displays its prime factors on the
	standard output, followed by a newline.

	Factors must be displayed in ascending order and separated by '*', so that
	the expression in the output gives the right result.

	If the number of parameters is not 1, simply display a newline.

	The input, when there is one, will be valid.
*/

#include <stdio.h>*

void	fprime(int n)
{
	int		i = 2;

	if (n == 1)
		printf("1");
	while (n > 1)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			n /= i; 
			if (n > 1)
				printf("*");
		}
		else
			i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}