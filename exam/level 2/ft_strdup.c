/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 11:35:19 by anadal-g          #+#    #+#             */
/*   Updated: 2025/05/08 13:09:37 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Reproduce the behavior of the function strdup (man strdup).

	Your function must be declared as follows:

	char    *ft_strdup(char *src);

*/

#include <stdlib.h>
#include <stdio.h>
char *ft_strdup(char *src)
{
	int i = 0;
	char *dest;

	while (src[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if(!dest)
		return NULL;
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}