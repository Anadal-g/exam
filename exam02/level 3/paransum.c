/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paransum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:33:33 by anadal-g          #+#    #+#             */
/*   Updated: 2025/02/18 12:05:57 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	Write a program that displays the number of arguments passed to it, followed by
	a newline.

	If there are no arguments, just display a 0 followed by a newline.

	Example:

	$>./paramsum 1 2 3 5 7 24
	6
	$>./paramsum 6 12 24 | cat -e
	3$
	$>./paramsum | cat -e
	0$
	$>
*/

#include <unistd.h>


void ft_putnbr(int n)
{
	char digit;

	if (n >= 10)
		ft_putnbr(n /10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
	
}

int main(int argc, char **argv)
{
	(void)argv;
	ft_putnbr(argc -1);
	write(1, "\n", 1);
}