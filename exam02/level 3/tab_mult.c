/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:16:35 by anadal-g          #+#    #+#             */
/*   Updated: 2025/05/21 13:18:21 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	Write a program that displays a number's multiplication table.

	The parameter will always be a strictly positive number that fits in an int,
	and said number times 9 will also fit in an int.

	If there are no parameters, the program displays \n.

*/

#include <unistd.h>

int		ft_atoi(char *str)
{
	int n = 0;

	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + *str - '0';
		++str;
	}
	return (n);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);

	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	nbr;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}