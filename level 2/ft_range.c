/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range(unv).c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:57:16 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/26 11:05:24 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

#include <unistd.h>
#include <stdlib.h>


int	*ft_range(int start, int end)
{
	int	*range;
	int	i;
	int	length;

	length = (start <= end ) ? (end - start + 1) : (start - end + 1);
	range = malloc(length * sizeof (int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < length)
	{
		range[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (range);
}
