/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:58:43 by anadal-g          #+#    #+#             */
/*   Updated: 2025/05/08 16:37:52 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function called ft_list_remove_if that removes from the
	passed list any element the data of which is "equal" to the reference data.

	It will be declared as follows :

	void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

	cmp takes two void* and returns 0 when both parameters are equal.

	You have to use the ft_list.h file, which will contain:

	$>cat ft_list.h
	typedef struct	  s_list
	{
		struct s_list   *next;
		void			*data;
	}				   t_list;
	$>
*/
#include <stdlib.h>

typedef struct	  s_list
{
	struct s_list   *next;
	void			*data;
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)				/* Checking if the list is empty. */
		return;

	t_list *cur = *begin_list;									/* Assigning the address of the first element of the list to the variable `cur`. */

	if (cmp(cur->data, data_ref) == 0)							/* Comparing the data of the current element of the list to the data_ref. */
	{
		*begin_list = cur->next;								/* Assigning the address of the next element of the list to the pointer to the first element of the list. */
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);			/* Calling the function on the rest of the list. */
	}
	cur = *begin_list;											/* Assigning the address of the first element of the list to the variable `cur`. */
	ft_list_remove_if(&cur->next, data_ref, cmp);				/* Calling the function on the rest of the list. */
}