/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring(unv).c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:30:11 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/28 09:59:53 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	int	flag;
	int	has_rest;

	has_rest = 0;
	i = 0;
	if (argc > 1)
	{
		while (argv[1][i] == 32 || argv[1][i] == '\t')
			i++;
		start = i;
		while (argv[1][i] != 32 && argv[1][i] != '\t' && argv[1][i] != '\0')
			i++;
		end = i;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 32 ||  argv[1][i] == '\t')
				flag = 1;
			else
			{
				if (flag == 1)
					write(1," ", 1);
				flag = 0;
				write(1, &argv[1][i], 1);
				has_rest = 1;
			}
			i++;
		}
		if (has_rest)
			write(1, " ", 1);
		while (start < end)
			write(1, &argv[1][start++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
