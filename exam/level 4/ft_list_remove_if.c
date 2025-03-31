/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:58:43 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/25 17:01:02 by anadal-g         ###   ########.fr       */
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

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*remove;
	t_list	*current;

	current = *begin_list;
	while (current && current->next)
	{
		if ((*cmp)(current->next->data, data_ref) == 0)
		{
			remove = current->next;
			current->next = current->next->next;
			free(remove);
		}
		current = current->next;
	}
	current = *begin_list;
	if (current && (*cmp)(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
	}
}