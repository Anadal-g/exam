/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:32:03 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/04 11:37:33 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function who takes two unsigned int as parameters and returns the 
	computed LCM of those parameters.

	LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
	integer divisible by the both integers.

	A LCM can be calculated in two ways:

	- You can calculate every multiples of each integers until you have a common
	multiple other than 0

	- You can use the HCF (Highest Common Factor) of these two integers and 
	calculate as follows:

		LCM(x, y) = | x * y | / HCF(x, y)
	
	| x * y | means "Absolute value of the product of x by y"

	If at least one integer is null, LCM is equal to 0.

	Your function must be prototyped as follows:

	unsigned int    lcm(unsigned int a, unsigned int b);

*/

#include <stdio.h>
#include <stdlib.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int number;
	
	if (a == 0 || b == 0)
		return 0;
	number = a;
	if (b > a)
		number = b;
	while ((number % a != 0) || (number % b != 0))
		number++;
	return number;
	
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		unsigned int m = lcm(atoi(argv[1]), atoi(argv[2]));
		printf("%u\n" , m);
	}
	
}