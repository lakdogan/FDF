/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parallel_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 01:11:06 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:29 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

float	ft_parallel_x(float x, float y)
{
	float	screen_x;

	screen_x = (x - y) * cos(0 * M_PI / 180);
	return (screen_x);
}

float	ft_parallel_y(float x, float y, float z)
{
	float	screen_y;

	ft_rotate_xy(&x, &y, 270);
	screen_y = (x + y) * sin(0 * M_PI / 180) - z;
	return (screen_y);
}

void	transform_parallel(t_data *data)
{
	float	x;
	float	y;
	float	z;
	float	screen_x;
	float	screen_y;

	init_struct_v(data);
	data->total = data->map.size * data->map.capacity;
	while (data->v.i < data->total)
	{
		x = data->mapv[data->v.i][0];
		y = data->mapv[data->v.i][1];
		z = data->mapv[data->v.i][2];
		screen_x = ft_parallel_x(x, y);
		screen_y = ft_parallel_y(x, y, z);
		data->mapv[data->v.i][0] = screen_x;
		data->mapv[data->v.i][1] = screen_y;
		data->v.i++;
	}
}

int	switch_to_parallel_view(t_data *data, int keycode)
{
	if (keycode == KEYTAB)
	{
		fill_mapv(data);
		transform_parallel(data);
		find_offset(data);
		print_mapv_mlx(data);
	}
	return (0);
}
