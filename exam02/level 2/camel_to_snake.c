/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:25:37 by anadal-g          #+#    #+#             */
/*   Updated: 2025/03/20 11:27:11 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a single string in lowerCamelCase format
	and converts it into a string in snake_case format.

	A lowerCamelCase string is a string where each word begins with a capital letter
	except for the first one.

	A snake_case string is a string where each word is in lower case, separated by
	an underscore "_".

	Examples:
	$>./camel_to_snake "hereIsACamelCaseWord"
	here_is_a_camel_case_word
	$>./camel_to_snake "helloWorld" | cat -e
	hello_world$
	$>./camel_to_snake | cat -e
	$
*/

#include <unistd.h>

void    camel_to_snake(char *s)
{
    while (*s)
    {
        if (*s >= 'A' && *s <= 'Z')
        {
            *s += 32;
            write(1, "_", 1);
        }
        write(1, s++, 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        camel_to_snake(argv[1]);
	write(1, "\n", 1);
    return (0);
}