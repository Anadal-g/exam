/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:12:22 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/25 16:52:13 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write the following function:

	int     *ft_rrange(int start, int end);

	It must allocate (with malloc()) an array of integers, fill it with consecutive
	values that begin at end and end at start (Including start and end !), then
	return a pointer to the first value of the array.

	Examples:

	- With (1, 3) you will return an array containing 3, 2 and 1
	- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
	- With (0, 0) you will return an array containing 0.
	- With (0, -3) you will return an array containing -3, -2, -1 and 0.

*/
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int len = (end - start) + 1;
    int *result;
    int i = 0;
    if (len < 0)
        len = -len + 1;
    result = (int *)malloc(sizeof(int) * len);
    if (!result)
        return NULL;
    while (i < len)
    {
        result[i] = end;
        end--;
        i++;
    }
    return result;
}
