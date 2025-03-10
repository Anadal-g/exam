/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:43:02 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/06 13:38:26 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that converts the string argument str (base N <= 16)
	to an integer (base 10) and returns it.

	The characters recognized in the input are: 0123456789abcdef
	Those are, of course, to be trimmed according to the requested base. For
	example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

	Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

	Minus signs ('-') are interpreted only if they are the first character of the
	string.

	Your function must be declared as follows:

	int	ft_atoi_base(const char *str, int str_base);

*/
int nbr_inbase(char c, int base)
{
	if (base <= 10)
		return(c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
            (c >= 'a' && c <= ('a' + base - 10)));
	
}

int	ft_atoi_base(const char *str, int base)
{
	int i = 0;
	int nbr = 0;
	int sign  = 1;
	
	if (!str[0] || (base < 2 || base > 16))
    	return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && nbr_inbase(str[i], base))
	{
		if (str[i] >= 'A' && 'F' >= str[i])
			nbr = (nbr *base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && 'f' >= str[i])
			nbr = (nbr *base) + (str[i] - 'a' + 10);
		else
			nbr = (nbr *base) + (str[i] - '0');
		i++;
	}
	return(nbr *sign);
}
