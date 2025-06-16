/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:31:27 by anadal-g          #+#    #+#             */
/*   Updated: 2025/01/09 10:55:14 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that determines if a given number is a power of 2.

	This function returns 1 if the given number is a power of 2, otherwise it returns 0.

	Your function must be declared as follows:

	int	    is_power_of_2(unsigned int n);
*/

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			return (0);
	}
	return(1);
}