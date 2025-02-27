/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 08:24:08 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/27 10:56:52 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	factorial(int num)
{
	int	i;
	int	factor;

	i = 2;
	factor = 1;
	if ( num == 0)
	{
		printf("0");
		return ;
	}
	if (num == 1)
	{
		printf("1");
		return ;
	}
	while (i * i <= num)
	{
		while (num % i == 0)
		{
			if (!factor)
				printf("*");
			printf("%d", i);
			num /= i;
			factor = 0;
		}
		i++;
	}
	if (num > 1)
	{
		if (!factor)
			printf("*");
		printf("%d", num);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		factorial(num);
	}
	printf("\n");
	return (0);
}
