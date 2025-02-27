/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:18:06 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/26 09:43:59 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function called ft_strrev that reverses a string in place.  
The function takes a string as input and modifies it by swapping its characters,  
so that the first character becomes the last, the second becomes the second-to-last, and so on.  
The function returns a pointer to the modified string.  

The function must be declared as follows:  
char *ft_strrev(char *str);  

Example:  
- Input: "hello" → Output: "olleh" (returns pointer to "olleh").  
- Input: "abc" → Output: "cba" (returns pointer to "cba").  
- Input: "" → Output: "" (returns pointer to empty string).  
*/

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		i;
	char	temp;
	int		length;

	length = 0;
	i = 0;
	while (str[length] != '\0')
		length++;
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
		i++;
	}
	return (str);
}
