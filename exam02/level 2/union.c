/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:37:17 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/06 16:47:25 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


/*

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.
*/

int check(int c, char *str, int index)
{
	int i = 0;
	
	while(i < index)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return  1;
}

int main(int argc, char **argv)
{	
	int i = 0;
	int j = 0;
	int k = 0;
	
	if (argc == 3)
	{
		while(argv[1][i])
			i++;
		while(argv[2][j]) 
		{
			argv[1][i] = argv[2][j]; 
			i++;
			j++;
		}
		i--;
		while(k <= i)
		{
			if(check(argv[1][k], argv[1], k) == 1) 
				write (1, &argv[1][k], 1); 
			k++;
		}
	}
	write (1, "\n", 1);
}