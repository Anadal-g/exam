/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:51:13 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/04 12:05:19 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string and displays this string after rotating it
	one word to the left.

	Thus, the first word becomes the last, and others stay in the same order.

	A "word" is defined as a part of a string delimited either by spaces/tabs, or
	by the start/end of the string.

	Words will be separated by only one space in the output.

	If there's less than one argument, the program displays \n.

	Example:

	$>./rostring "abc   " | cat -e
	abc$
	$>
	$>./rostring "Que la      lumiere soit et la lumiere fut"
	la lumiere soit et la lumiere fut Que
	$>
	$>./rostring "     AkjhZ zLKIJz , 23y"
	zLKIJz , 23y AkjhZ
	$>
	$>./rostring | cat -e
	$
	$>
*/

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int k = 0;

	if (argc > 1)
	{
		//Buscamos el inicio de la primera palabra
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
    		i++;;
		k = i;
		//Buscamos el final de la primera palabra
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
    		i++;
		while (argv[1][i])
		{
    		if (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t') && (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
    		{
       			while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
            		write(1, &argv[1][i++], 1);
        		write(1, " ", 1);
    		}
    		i++;
		}
		while (argv[1][k] && (argv[1][k] != ' ' && argv[1][k] != '\t'))
    		write(1, &argv[1][k++], 1);

	}
	write(1, "\n", 1);
}