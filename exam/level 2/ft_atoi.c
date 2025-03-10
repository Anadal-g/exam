/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:49:20 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/05 12:10:47 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that converts the string argument str to an integer (type int)
	and returns it.

	It works much like the standard atoi(const char *str) function, see the man.

	Your function must be declared as follows:

	int	ft_atoi(const char *str);
*/

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int nbr = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * sign);

}
	
	