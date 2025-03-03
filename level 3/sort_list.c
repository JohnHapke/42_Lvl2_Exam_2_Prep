/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:54:39 by jhapke            #+#    #+#             */
/*   Updated: 2025/03/03 10:49:55 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}
*/

#include <unistd.h>
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		temp;
	t_list	*begin;

	begin = lst;
	while (lst && lst->next)
	{
		if ((*cmp)((lst->data), (lst->next->data)) == 0)
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = begin;
		}
		else
			lst = lst->next;
	}
	return (begin);
}
