/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:12:14 by anadal-g          #+#    #+#             */
/*   Updated: 2025/02/25 12:56:56 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write the following function:

	int		max(int* tab, unsigned int len);

	The first parameter is an array of int, the second is the number of elements in
	the array.

	The function returns the largest number found in the array.

	If the array is empty, the function returns 0.
*/

int	max(int *tab, unsigned int len)
{
	while (!tab)
		return(0);
	int cmp = tab[0];
	unsigned int i = 1;
	while (len > i)
	{
		if (tab[i] > cmp)
			cmp = tab[i];
		i++;
	}
	return(cmp);
}

int main()
{
    int arr[] = {1, 5, 3, 9, 2};
    unsigned int len = 5;

    int result = max(arr, len);
    printf("El máximo es: %d\n", result);
    return 0;
}
