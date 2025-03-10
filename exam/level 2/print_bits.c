/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:32:26 by anadal-g          #+#    #+#             */
/*   Updated: 2025/01/10 10:33:57 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
	AT THE END.

	Your function must be declared as follows:

	void	print_bits(unsigned char octet);

*/

#include "unistd.h"

void	print_bits(unsigned char octet)
{
	int				i = 8;
	unsigned char	bit;

	while (i--)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);
	}
}
