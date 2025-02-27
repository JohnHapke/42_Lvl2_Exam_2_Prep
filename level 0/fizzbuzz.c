/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:01:17 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/24 09:06:03 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz */

#include <unistd.h>

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 9);
		else if (n % 3 == 0)
			write(1, "fizz", 5);
		else if (n % 5 == 0)
			write(1, "buzz", 5);
		else
		{
			if (n > 9)
				write(1, &"0123456789"[n / 10], 1);
			write(1, &"0123456789"[n % 10], 1);
		}
		write(1, "\n", 1);
		n++;
	}
}



/*
int	main(void)
{
	int	start;
	int	end;
	int	i;
	int	k;

	start = 1;
	end = 100;
	while (start <= end)
	{
		if ((start % 3 == 0) && (start % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (start % 3 == 0)
			write(1, "fizz", 4);
		else if (start % 5 == 0)
			write(1, "buzz", 4);
		else if (start < 10)
		{
			i = start + '0';
			write(1, &i, 1);
			i = 0;
		}
		else if (start >= 10)
		{
			i = start / 10 + '0';
			k = start % 10 + '0';
			write(1, &i, 1);
			write(1, &k, 1);
		}
		write(1, "\n", 1);
		start++;
	}
	return (0);
} */
