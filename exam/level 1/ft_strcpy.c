/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:05:46 by anadal-g          #+#    #+#             */
/*   Updated: 2025/01/09 10:09:46 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Reproduce the behavior of the function strcpy (man strcpy).
*/

char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return(s2);
}