/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:15:19 by anadal-g          #+#    #+#             */
/*   Updated: 2025/02/25 12:24:15 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that reverses (in-place) a string.

	It must return its parameter.

	Your function must be declared as follows:

	char    *ft_strrev(char *str);
*/

char		*ft_strrev(char *str)
{
	int i;
	int	len = 0;
	char tmp;
	
	while (str[i])
		i++;
	i--;
	while (len < i)
	{
		tmp = str[i];
		str[i]=str[len];
		str[len]= tmp;
		i--;
		len++;
	}
	return (str);
	
}