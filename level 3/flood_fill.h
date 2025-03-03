/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 08:19:19 by jhapke            #+#    #+#             */
/*   Updated: 2025/03/03 09:30:51 by jhapke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that takes a char ** as a 2-dimensional array of char, a
t_point as the dimensions of this array and a t_point as the starting point.

Starting from the given 'begin' t_point, this function fills an entire zone
by replacing characters inside with the character 'F'. A zone is an group of
the same character delimitated horizontally and vertically by other characters
or the array boundry.

The flood_fill function won't fill diagonally.

The flood_fill function will be prototyped like this:
  void  flood_fill(char **tab, t_point size, t_point begin);

The detailed description you can find in the "flood_fill.c" file.
*/

#ifndef	FLOOD_FILL_H
# define FLOOD_FILL_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h> 

typedef struct s_point
{
	int			x;
	int			y;
}				t_point;

#endif
