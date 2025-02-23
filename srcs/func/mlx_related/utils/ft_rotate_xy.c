/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_xy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:25:48 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 01:46:19 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

// Rotate (x, y) by 'theta' degrees around the origin.
void	ft_rotate_xy(float *x, float *y, float theta)
{
	float	temp_x;
	float	temp_y;
	float	rad;

	rad = theta * M_PI / 180;
	temp_x = (*x) * cos(rad) - (*y) * sin(rad);
	temp_y = (*x) * sin(rad) + (*y) * cos(rad);
	*x = temp_x;
	*y = temp_y;
}
