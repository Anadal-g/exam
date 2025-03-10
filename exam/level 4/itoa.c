/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:30:11 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/06 13:05:40 by anadal-g         ###   ########.fr       */
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
	int	len;
	long	n_tmp;
	char	*str;

	len = 0;								
	n_tmp = nbr;
	
	if (nbr == -2147483648)					
		return ("-2147483648");	
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
		str[0] = '-';
	}
	while (n_tmp)
	{
		n_tmp /= 10;
		len += 1;
	}
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

