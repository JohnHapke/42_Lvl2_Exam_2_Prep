/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:45:00 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/26 10:11:44 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function called ft_strspn that calculates the length of the initial segment  
of the string `s` which consists entirely of characters present in the string `accept`.  
The function returns the number of characters in `s` before encountering a character  
that is not in `accept`.  

The function must be declared as follows:  
size_t ft_strspn(const char *s, const char *accept);  

Example:  
- ft_strspn("hello", "hle") returns 4 (4 characters "hello" are in "hle").  
- ft_strspn("hello world", "hel") returns 4 ("hell" matches, but 'o' is not in "hel").  
- ft_strspn("abc", "xyz") returns 0 (no characters match).  
- ft_strspn("", "abc") returns 0 (empty string).  
*/

#include <unistd.h>

size_t ft_strspn(const char *s, const char *accept)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break ;
			j++;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("result: %zu\n", ft_strspn(argv[1], argv[2]));
	return (0);
}
