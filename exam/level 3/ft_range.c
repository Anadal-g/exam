/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:38:55 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/25 16:55:18 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
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
        result[i] = start;
        start++;
        i++;
    }
    return result;
}

