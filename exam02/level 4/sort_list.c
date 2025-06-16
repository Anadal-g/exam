/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:55:09 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/05 11:49:02 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write the following functions:

	t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

	This function must sort the list given as a parameter, using the function 
	pointer cmp to select the order to apply, and returns a pointer to the 
	first element of the sorted list.

	Duplications must remain.

	Inputs will always be consistent.

	You must use the type t_list described in the file list.h 
	that is provided to you. You must include that file 
	(#include "list.h"), but you must not turn it in. We will use our own 
	to compile your assignment.

	Functions passed as cmp will always return a value different from 
	0 if a and b are in the right order, 0 otherwise.

	For example, the following function used as cmp will sort the list 
	in ascending order:

	int ascending(int a, int b)
	{
		return (a <= b);
	}

*/

#include "list.h"
#include <unistd.h>

t_list		*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		overflow;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			overflow = lst->data;
			lst->data = lst->next->data;
			lst->next->data = overflow;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}