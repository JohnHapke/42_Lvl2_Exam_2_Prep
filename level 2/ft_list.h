/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:06:53 by jhapke            #+#    #+#             */
/*   Updated: 2025/02/27 10:23:43 by jhapke           ###   ########.fr       */
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
*/

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif
