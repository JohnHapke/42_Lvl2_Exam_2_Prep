/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:11:25 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/24 08:59:17 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this    ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		while (*str == ' ' || *str == '\t')
			str++;
		while (*str && *str != ' ' && *str != '\t')
		{
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}



/*
int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		if (argv[1][i + 1] <= 'A' || argv[1][i + 1] >= 'z')
		{
			write(1, "\n", 1);
			return (0);
		}
		if (argv[1][i] >= 'A' && argv[1][i] <= 'z')
		{
			while (argv[1][i] != ' ' && argv[1][i] != '\0' && argv[1][i] != '\t')
				write(1, &argv[1][i++], 1);
			write(1, "\n", 1);
		}
	}
	return (0);
} */


