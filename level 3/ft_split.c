/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:30:46 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/28 12:18:01 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_count_word(char *str)
{
	int	i;
	int	count;
	int	flag;

	flag = 1;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == 9 || str[i] == '\n')
			flag = 1;
		else if (flag == 1)
		{
			flag = 0;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	char	**result;
	int		i;
	int		j;
	int		word_count;
	int		word;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	word_count = ft_count_word(str);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*str && i < word_count)
	{
		while (*str == 32 || *str == 9 || *str == '\n')
			str++;
		word = 0;
		j = 0;
		while (str[word] != 32 && str[word] != 9
			&& str[word] != '\n' && str[word] != '\0')
			word++;
		result[i] = malloc((word + 1) * sizeof(char));
		while (word > j)
			result[i][j++] = *str++;
		result[i][j] = '\0';
		i++;
	}
	result[i] = NULL;
	return (result);
}
