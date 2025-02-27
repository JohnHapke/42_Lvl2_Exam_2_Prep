/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr(unv).c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 09:34:20 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/27 11:45:19 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
*/

#include <unistd.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;


	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		while (i >= 0)
		{
			if (argv[1][i] != 32 && argv[1][i] != 9 && i != 0)
				i--;
			else
			{
				j = i + 1;
				if (i == 0)
					j = 0;
				while (argv[1][j] != 32 && argv[1][j] != 9
						&& argv[1][j] != '\0')
				{
					write(1, &argv[1][j], 1);
					j++;
				}
				if (i > 0)
					write(1, " ", 1);
				i--;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
