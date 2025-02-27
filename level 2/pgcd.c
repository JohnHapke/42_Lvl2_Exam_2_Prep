/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 08:26:14 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/26 12:03:09 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int				i;
	int				dom;
	unsigned int	num1;
	unsigned int	num2;

	if (argc == 3)
	{
		i = 0;
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if (num1 > 0 && num2 > 0)
		{
			dom = (num1 < num2) ? num1 : num2;
			while (dom > 0)
			{
				if ((num1 % dom == 0) && (num2 % dom == 0))
				{
					printf("%u\n", dom);
					return (0);
				}
				dom--;
			}
		}
	}
	printf("\n");
	return (0);
}
