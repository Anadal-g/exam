/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:16:35 by anadal-g          #+#    #+#             */
/*   Updated: 2025/05/07 12:45:41 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	Write a program that displays a number's multiplication table.

	The parameter will always be a strictly positive number that fits in an int,
	and said number times 9 will also fit in an int.

	If there are no parameters, the program displays \n.

*/
#include <unistd.h>

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

void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &(char){n % 10 + '0'}, 1);
}

int main(int argc, char **argv)
{
	int i = 1;
	int nbr;

	if (argc == 2)
	{
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
	// No imprimir \n fuera del if
}
