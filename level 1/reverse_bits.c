/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:34:25 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/26 08:43:48 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that reverses the bits of an unsigned char.  
The function takes an unsigned char (an octet) as input and returns an
unsigned char with the bits in reversed order (bit 7 becomes bit 0,
bit 6 becomes bit 1, etc.).

Example:  
Input: 2 (binary: 00000010)  
Output: 64 (binary: 01000000)  

unsigned char reverse_bits(unsigned char octet);
*/

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	result;

	i = 0;
	result = 0;
	while (i <= 7)
	{
		result = (result << 1) | (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return (result);
}
