/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:05:38 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/24 09:54:16 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_putstr(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}


void	ft_repeat_alpha(char *c)
{
	while (*c)
	{
		if (*c >= 'A' && *c <= 'Z')
			ft_putstr(*c, *c - 'A' + 1);
		else if (*c >= 'a' && *c <= 'z')
			ft_putstr(*c, *c - 'a' + 1);
		else
			write(1, c, 1);
		c++;
	}
}


int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
