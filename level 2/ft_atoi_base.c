/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 09:11:38 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/26 10:58:13 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
*/

#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		result;
	int		sign;
	int		value;

	i = 0;
	sign = 1;
	result = 0;
	value = 0;
	if (str_base < 2 || str_base > 16)
		return (0);
	if (str[0] == 45)
	{
		sign *= -1;
		i++;
	}
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			value = str[i] - 'A' + 10;
		else if (str[i] >= '0' && str[i] <= '9')
			value = str[i] - '0';
		else if ((str[i] >= 'a' && str[i] <= 'f'))
			value = str[i] - 'a' + 10;
		else
			break ;
		if (value >= str_base)
			break ;
		result = result * str_base + value;
		i++;
	}
	return (result * sign);
}
