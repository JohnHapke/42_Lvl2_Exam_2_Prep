/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:08:43 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/27 10:24:34 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

    int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

    typedef struct    s_list
    {
        struct s_list *next;
        void          *data;
    }                 t_list;

Escriba una función que devuelva el número de elementos en la lista vinculada 
que se pasó a ella.
*/

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;

	count = 0;
	while (begin_list != 0)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    t_list *list = NULL;
    t_list *elem1 = malloc(sizeof(t_list));
    t_list *elem2 = malloc(sizeof(t_list));
    t_list *elem3 = malloc(sizeof(t_list));

    elem1->next = elem2;
    elem2->next = elem3;
    elem3->next = NULL;
    list = elem1;

    printf("Size of list: %d\n", ft_list_size(list)); // Sollte 3 ausgeben

    free(elem1);
    free(elem2);
    free(elem3);
    return (0);
} */
