/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 08:55:27 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/27 11:04:08 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_digits(int num)
{
	int	count;

	count = 0;
	if ( num == 0)
		return (1);
	if (num < 0)
	{
		num = -num;
		count++;
	}
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	long	num;
	int		lenght;

	lenght = ft_digits(nbr);
	str = malloc((lenght + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[lenght] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	num = nbr;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--lenght] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
