/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:35:47 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/06 11:52:49 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that takes a string, splits it into words, and returns them as
	a NULL-terminated array of strings.

	A "word" is defined as a part of a string delimited either by spaces/tabs/new
	lines, or by the start/end of the string.

	Your function must be declared as follows:

	char    **ft_split(char *str);
*/

#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
	int i =  0;
	int j = 0;
	int  k = 0;
	char **split;

	//reservamos memoria con un maximo de 256 palabras
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return NULL;
	//saltamos espacios
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
	while (str[i])
	{
		j = 0;
		//reservamos memoria con un maximo de 4096 caracteres por palabra
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return NULL;
		//copiamos los caracteres de una palabra
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] == str[i++];
		//Volvemos a saltar espacios
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        	i++;
		k++;
	}
	return(split);
}