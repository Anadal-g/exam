/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anadal-g <anadal-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 10:41:14 by anadal-g          #+#    #+#             */
/*   Updated: 2025/07/03 16:31:15 by anadal-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	Write a function named `ft_printf` that will mimic the real printf but 
	it will manage only the following conversions: s,d and x.

	Your function must be declared as follows:

	int ft_printf(const char *, ... );

	Before you start we advise you to read the `man 3 printf` and the `man va_arg`.
	To test your program compare your results with the true printf.

	Exemples of the function output:

	call: ft_printf("%s\n", "toto");
	out: toto$

	call: ft_printf("Magic %s is %d", "number", 42);
	out: Magic number is 42%

	call: ft_printf("Hexadecimal for %d is %x\n", 42, 42);
	out: Hexadecimal for 42 is 2a$

	Obs: Your function must not have memory leaks. Moulinette will test that.
*/


#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

// Imprime un solo carácter
int ft_putchar(char c)
{
    return write(1, &c, 1);
}

// Imprime una cadena de texto
int ft_putstr(char *str)
{
    int i = 0;
    if (str == NULL)
        str = "(null)";
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return i;
}

// Función auxiliar para imprimir un número en base específica (recursiva)
int ft_putnbr_base(unsigned int nb, int base, char *digits)
{
    int count = 0;
    if (nb >= (unsigned int)base)
        count += ft_putnbr_base(nb / base, base, digits);
    count += ft_putchar(digits[nb % base]);
    return count;
}

// Imprime un número sin signo en base decimal o hexadecimal
int ft_putnbr(unsigned int nb, int base)
{
    char *digits = "0123456789abcdef";
    return ft_putnbr_base(nb, base, digits);
}

// Imprime un número entero con signo
int print_d(int nb)
{
    int count = 0;

    if (nb < 0)
    {
        count += ft_putchar('-');
        if (nb == -2147483648)
        {
            count += ft_putstr("2147483648");
            return count;
        }
        nb = -nb;
    }
    count += ft_putnbr((unsigned int)nb, 10);
    return count;
}

// Implementación simplificada de printf con soporte para %d, %x y %s
int ft_printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'd')
                count += print_d(va_arg(args, int));
            else if (*format == 'x')
                count += ft_putnbr(va_arg(args, unsigned int), 16);
            else if (*format == 's')
                count += ft_putstr(va_arg(args, char *));
        }
        else
        {
            count += ft_putchar(*format);
        }
        format++;
    }

    va_end(args);
    return count;
}
