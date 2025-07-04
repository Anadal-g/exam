/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:11:40 by anadal-g          #+#    #+#             */
/*   Updated: 2025/05/21 12:03:34 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string and displays it with exactly three spaces
	between each word, with no spaces or tabs either at the beginning or the end,
	followed by a newline.

	A word is a section of string delimited either by spaces/tabs, or by the
	start/end of the string.

	If the number of parameters is not 1, or if there are no words, simply display
	a newline.

	Examples:

	$> ./expand_str "See? It's easy to print the same thing" | cat -e
	See?   It's   easy   to   print   the   same   thing$
	$> ./expand_str " this        time it      will     be    more complex  " | cat -e
	this   time   it   will   be   more   complex$
	$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
	$
	$> ./expand_str "" | cat -e
	$
	$>

	$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
	vous   voyez   c'est   facile   d'afficher   la   meme   chose$
	$> ./expand_str " seulement          la c'est      plus dur " | cat -e
	seulement   la   c'est   plus   dur$
	$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
	$
	$> ./expand_str "" | cat -e
	$
	$>

*/


#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int flag = 0;
	if(argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flag = 1;
			if(!(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (flag)
					write(1, "   ", 3);
				flag = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}