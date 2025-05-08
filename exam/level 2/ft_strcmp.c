/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:17:01 by anadal-g          #+#    #+#             */
/*   Updated: 2025/05/08 12:51:42 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Reproduce the behavior of the function strcmp (man strcmp).

	Your function must be declared as follows:

	int    ft_strcmp(char *s1, char *s2);
*/

int    ft_strcmp(char *s1, char *s2)
{	
	while (*s1 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 1;
	}
	return (*s1 - *s2);
}
#include <stdio.h>

int main()
{
    char str1[] = "hola";
    char str2[] = "hola";
    char str3[] = "mundo";
    char str4[] = "hoja";

    printf("Comparando '%s' y '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("Comparando '%s' y '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
    printf("Comparando '%s' y '%s': %d\n", str1, str4, ft_strcmp(str1, str4));

    return 0;
}
