/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:56:28 by anadal-g          #+#    #+#             */
/*   Updated: 2025/05/07 11:58:31 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		i--;
		while (argv[1][i] <= 32) //retrocede para quitar espacios
			i--;
		while (argv[1][i] > 32) //retrocede hasta el inicio de la ultima palabra
			i--;
		i++;
		while (argv[1][i] > 32) //Pinta la ultima palabra
   			write(1, &argv[1][i++], 1);
	}
	write (1, "\n", 1);
	return (0);
}