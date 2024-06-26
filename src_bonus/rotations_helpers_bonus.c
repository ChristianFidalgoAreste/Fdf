/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations_helpers_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfidalgo <cfidalgo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:54:06 by cfidalgo          #+#    #+#             */
/*   Updated: 2024/04/09 20:06:33 by cfidalgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf_bonus.h"

void	rotate_x_axis(t_point *point, double angle)
{
	double	temp_y;
	double	temp_z;

	temp_y = point->y;
	temp_z = point->z;
	point->y = (cos(angle) * temp_y) + (-sin(angle) * temp_z);
	point->z = (sin(angle) * temp_y) + (cos(angle) * temp_z);
}

void	rotate_y_axis(t_point *point, double angle)
{
	double	temp_x;
	double	temp_z;

	temp_x = point->x;
	temp_z = point->z;
	point->x = (cos(angle) * temp_x) + (sin(angle) * temp_z);
	point->z = (-sin(angle) * temp_x) + (cos(angle) * temp_z);
}

void	rotate_z_axis(t_point *point, double angle)
{
	double	temp_x;
	double	temp_y;

	temp_x = point->x;
	temp_y = point->y;
	point->x = (cos(angle) * temp_x) + (-sin(angle) * temp_y);
	point->y = (sin(angle) * temp_x) + (cos(angle) * temp_y);
}
