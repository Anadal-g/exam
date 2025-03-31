/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:28:20 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/25 16:27:02 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
	The strcspn() function calculates the length of the initial segment  of
    s which consists entirely of bytes not in reject.

*/
#include <stdio.h>
#include <string.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return(i);
}

int main()
{
    char str[] = "hello world";
    char reject[] = "haaaaa";
    
    printf("Resultado: %zu\n", ft_strcspn(str, reject));
    return 0;
}