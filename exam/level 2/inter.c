/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:25:37 by anadal-g          #+#    #+#             */
/*   Updated: 2025/02/25 12:28:16 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes two strings and displays, without doubles, the
	characters that appear in both strings, in the order they appear in the first
	one.

	The display will be followed by a \n.

	If the number of arguments is not 2, the program displays \n.

	Examples:

	$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
	padinto$
	$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
	df6ewg4$
	$>./inter "rien" "cette phrase ne cache rien" | cat -e
	rien$
	$>./inter | cat -e
*/

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int tab[256] = {0};
	if(argc == 3)
	{
		while(argv[1][i])
		{	
			j = 0;
			while(argv[2][j])
			{
				if(argv[2][j] == argv[1][i])
				{
					if(tab[(int)argv[1][i]] == 0)
					{
						tab[(int)argv[1][i]] = 1;
						write(1, &argv[2][j], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}