/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:34:27 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/06 13:53:30 by anadal-g         ###   ########.fr       */
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


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i = 2;
	int num;
	num = atoi(argv[1]);

	if (argc == 2)
	{
		if (num ==1)
			printf("1");
		while (i <= num)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
					break;
				printf("*");
				num = num / i;
				i = 2;
			}
			i++;
		}
		
	}
	printf("\n");
}
