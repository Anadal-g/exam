/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:38:55 by anadal-g          #+#    #+#             */
/*   Updated: 2025/05/21 11:47:04 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int len;
	int *result;
	int i = 0;
	if(start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	result = (int *)malloc(sizeof(int) * len);
	if (!result)
		return NULL;
	while (i < len)
	{
		result[i] = start;
		if(start < end)
			start++;
		else
			start--;
		i++;
	}
	return result;
	 
}