/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:38:14 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/20 12:18:48 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

*/

int	main(int argc, char **argv)
{
	int i = 0;
	char letter;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				letter = argv[1][i] - 'A' + 1;
				while (letter--)
					write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				letter = argv[1][i] - 'a' + 1;
				while (letter--)
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

#include "unistd.h"

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 97 && argv[1][i] <= 122)
            {
                int j = 0;
                while (j < argv[1][i] - 96)
                {
                    write(1, &argv[1][i], 1);
                    j++;
                }
            }
            else if (argv[1][i] >= 65 && argv[1][i] <= 90)
            {
                int j = 0;
                while (j < argv[1][i] - 64)
                {
                    write(1, &argv[1][i], 1);
                    j++;
                }
            }
            else
                write(1, &argv[1][i], 1);
            i++; // Se mueve fuera del else para que siempre avance
        }
    }
    write(1, "\n", 1);
    return 0; // Buena práctica añadir el return
}