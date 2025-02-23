/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:11:59 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 06:06:42 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

static void	validate_and_translate(float x, float y, float z, t_data *data)
{
	float	screen_x;
	float	screen_y;

	screen_x = ft_isometric_x(x, y);
	if (data->map.capacity >= 500)
		screen_y = ft_isometric_y(x, y, z);
	else if (data->map.capacity >= 130 || data->map.capacity == 100)
		screen_y = ft_isometric_y(x, y, (z / 3.75));
	else if (data->map.capacity <= 5)
		screen_y = ft_isometric_y(x, y, z * 1.2);
	else if (data->map.size <= 7)
		screen_y = ft_isometric_y(x, y, z * 1.2);
	else
		screen_y = ft_isometric_y(x, y, (z / 1.5));
	data->mapv[data->v.i][0] = screen_x;
	data->mapv[data->v.i][1] = screen_y;
}

void	transform_isometric(t_data *data)
{
	float	x;
	float	y;
	float	z;

	init_struct_v(data);
	data->total = data->map.size * data->map.capacity;
	while (data->v.i < data->total)
	{
		x = data->mapv[data->v.i][0];
		y = data->mapv[data->v.i][1];
		z = data->mapv[data->v.i][2];
		ft_rotate_xy(&x, &y, 270);
		validate_and_translate(x, y, z, data);
		data->v.i++;
	}
}
