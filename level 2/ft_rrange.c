/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange(unv).c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:13:28 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/26 11:18:58 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

#include <unistd.h>

int	*ft_rrange(int start, int end)
{
	int	*range;
	int	i;
	int	length;

	length = (start <= end) ? (end - start + 1) : (start - end + 1);
	range = malloc(length * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (length > i)
	{
		range[i] = end;
		if (start > end)
			end++;
		else
			end--;
		i++;
	}
	return (range);
}
