/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:30:11 by anadal-g          #+#    #+#             */
/*   Updated: 2025/05/08 13:17:48 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that takes an int and converts it to a null-terminated string.
	The function returns the result in a char array that you must allocate.

	Your function must be declared as follows:

	char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <stdlib.h>

char    *ft_itoa(int nbr)
{
	long n = nbr;
	int len = (n <= 0);
	long tmp = n;
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	char *str = malloc(len +1);
	if(!str)
		return NULL;
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n)
	{
		str[--len] = '0' + (n % 10);
		n /= 10;
	}
	return str;
}

