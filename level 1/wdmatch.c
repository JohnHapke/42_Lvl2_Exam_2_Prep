/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:23:16 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/26 08:29:35 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Here is the translation of the text into English:

Write a program that takes two strings and checks if it is possible  
to write the first string using characters from the second string, respecting  
the order in which these characters appear in the second string.  

If it is possible, the program displays the string followed by \n; otherwise,  
it simply displays a \n.  

If the number of arguments is not 2, the program displays a \n.  

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e  
faya$  
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e  
$  
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e  
forty two$  
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e  
$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (argv[1][i] == '\0')
		{
			i = 0;
			while (argv[1][i] != '\0')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
