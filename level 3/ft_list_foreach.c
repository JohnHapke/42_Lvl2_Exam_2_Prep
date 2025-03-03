/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:34:14 by jhapke            #+#    #+#             */
/*   Updated: 2025/03/03 09:53:54 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
} t_list;
*/

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

/*
void	print_data(void *data)
{
	printf("%d\n", *(int *)data);
}


int	main(void)
{
	t_list *list = malloc(sizeof(t_list));
	t_list *second = malloc(sizeof(t_list));
	int a = 42;
	int b = 80;

	list->data = &a;
	list->next = second;
	second->data = &b;
	second->next = NULL;

	ft_list_foreach(list, print_data);

	free(list);
	free(second);
	return (0);
}
*/