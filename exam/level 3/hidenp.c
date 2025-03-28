/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:51:58 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/06 10:33:25 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 /*
 
	Write a program named hidenp that takes two strings and displays 1
	followed by a newline if the first string is hidden in the second one,
	otherwise displays 0 followed by a newline.

	Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
	find each character from s1 in s2, in the same order as they appear in s1.
	Also, the empty string is hidden in any string.

	If the number of parameters is not 2, the program displays a newline.

	Examples :

	$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
	1$
	$>./hidenp "abc" "2altrb53c.sse" | cat -e
	1$
	$>./hidenp "abc" "btarc" | cat -e
	0$
	$>./hidenp | cat -e
	$
	$>

 */
#include <unistd.h>

void hidenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 && *s1 == *s2)
			s1++;
		s2++;
	}
	if (!*s1) //Si hemos recorrido toda s1, significa que esta dentro de s2
		write(1, "1", 1);
	else
		write(1, "0", 1);
	
}

int main(int argc, char **argv)
{
    if (argc == 3)
        hidenp(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
