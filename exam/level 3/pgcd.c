/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:09:38 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/25 13:14:14 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	Write a program that takes two strings representing two strictly positive
	integers that fit in an int.

	Display their highest common denominator followed by a newline (It's always a
	strictly positive integer).

	If the number of parameters is not 2, display a newline.

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int gcd(unsigned int a, unsigned int b)
{
	unsigned int temp;
	
	while (b != 0)
	{
		//Calculate the remainder of a divided by b and swaps the values of a and b in each iteration until b becomes 0. At that point, a contains the HCF
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	unsigned int n1 = atoi(argv[1]);
	unsigned int n2 = atoi(argv[1]);
	unsigned int res = gcd(n1, n2);
	printf("%d\n", res);
	
}