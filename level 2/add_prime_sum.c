/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:06:08 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/26 10:21:22 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <unistd.h>

int	ft_atoi(char *c)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (c[i] != '\0')
	{
		if ((c[i] >= 9 && c[i] <= 13) || c[i] == 32)
			i++;
		if (c[i] == 43 || c[i] == 45)
		{
			if (c[i] == 45)
				sign = -1;
			i++;
		}
		while (c[i] >= '0' && c[i] <= '9')
		{
			result = result * 10 + (c[i] - '0');
			i++;
		}
	}
	return (result * sign);
}

int	is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_write(int n)
{
	char	c[10];
	int		i;

	i = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (n > 0)
	{
		c[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	while (--i >= 0)
		write(1, &c[i], 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	sum;

	sum = 0;
	if (argc == 2)
	{
		i = ft_atoi(argv[1]);
		if (i > 1)
		{
			while (i > 1)
			{
				if (is_prime(i))
					sum += i;
				i--;
			}
		}
	}
	ft_write(sum);
	write(1, "\n", 2);
	return (0);
}
