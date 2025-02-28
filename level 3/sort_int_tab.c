/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:27:55 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/28 10:30:05 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/

#include <unistd.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;
	int				j;

	j = size;
	if (size <= 1)
		return ;
	while (j > 1)
	{
		i = 0;
		while (i < j - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j--;
	}
}
