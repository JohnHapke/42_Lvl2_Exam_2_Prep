/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:24:04 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/24 11:50:29 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
*/

#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	if ( n == 0)
		return (0);
	while (n > 1)
	{
		if ((n % 2) == 0)
			n /= 2;
		else
			return (0);
	}
	return (1);
}
