/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:20:10 by anadal-g          #+#    #+#             */
/*   Updated: 2025/01/07 19:20:56 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	
Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);
	
	
*/

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}