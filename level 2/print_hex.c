/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:02:09 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/27 08:52:02 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/

#include <unistd.h>

int	ft_atoi_hex(char *c)
{
	int		i;
	int		result;

	result = 0;
	i = 0;
	while (c[i] >= '0' && c[i] <= '9')
	{
		result = result * 10 + (c[i] - '0');
		i++;
	}
	return (result);
}

void	ft_putnbr_hex(int c)
{
	char	*hex;
	int		i;
	char	result[20];

	i = 0;
	hex = ("0123456789abcdef");
	if (c == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (c > 0)
	{
		result[i] = hex[c % 16];
		c /= 16;
		i++;
	}
	while (--i >= 0)
		write(1, &result[i], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr_hex(ft_atoi_hex(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}
