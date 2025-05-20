#include <unistd.h>

int is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i <= (nb / 2))
    {
        if (!(nb % i))
            return (0);
        else
            i += 1;
    }
    return (1);
}

void ft_putnbr(int nb)
{
    if(nb > 9)
        ft_putnbr(nb / 10);
    write(1, &(char){nb % 10 + '0'}, 1);
}


int ft_atoi(char  *str)
{
	int i = 0;
	int sign = 1;
	int nbr = 0;

	if (!str[i])
		return(0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f' \
            || str[i] == '\v' || str[i] == '\r' || str[i] == '\t')
			i++;
	if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
        nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);	
}


int main (int argc, char **argv)
{
	int nb;
	int sum = 0;

	if (argc = 2)
	{
		nb = ft_atoi(argv[1]);
		while (nb > 0)
		{
			if (is_prime(nb))
			{
				sum += (nb + 1);
				nb--;
			}
		ft_putnbr(sum);
		}
	}
	write(1, "\n", 1);
}