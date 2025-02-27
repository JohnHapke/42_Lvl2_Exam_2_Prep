/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:01:13 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/26 09:17:07 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function called ft_strpbrk that searches for the first occurrence
in the string s1 of any character present in the string s2.

The function returns a pointer to the position in s1 where the first match is found.

If no character from s2 is found in s1, the function returns NULL.

The function must be declared as follows:
char *ft_strpbrk(const char *s1, const char *s2);

Example:
- ft_strpbrk("hello world", "wr") returns a pointer to "w" in "hello world".
- ft_strpbrk("hello", "xyz") returns NULL (no match).
- ft_strpbrk("", "abc") returns NULL (empty string s1).
*/

#include <unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
