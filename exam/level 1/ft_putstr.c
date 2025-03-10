/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:28:43 by anadal-g          #+#    #+#             */
/*   Updated: 2025/01/14 11:56:31 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that displays a string on the standard output.

	The pointer passed to the function contains the address of the string's first
	character.

	Your function must be declared as follows:

	void	ft_putstr(char *str);
*/

#include <unistd.h>

void ft_putstr(char *str)
{
	int	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	
}