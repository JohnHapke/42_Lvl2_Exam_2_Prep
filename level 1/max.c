/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:11 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/25 08:15:08 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				res;

	if ( len == 0)
		return (0);
	res = tab[0];
	i = 0;
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}

/* #include <stdio.h>

int max(int *tab, unsigned int len);

int main(void)
{
    int arr[] = {};
    unsigned int len = sizeof(arr) / sizeof(arr[0]);

    int result = max(arr, len);

    printf("The maximum value in the array is: %d\n", result);
    return 0;
} */
