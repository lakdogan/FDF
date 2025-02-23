/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_rotation_x_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:50:47 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 21:11:14 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	rotate_x_axis_plus(t_data *data)
{
	data->rotate_x = data->scale_rad;
	rotate_x_axis(data);
}

void	rotate_x_axis_minus(t_data *data)
{
	data->rotate_x = -data->scale_rad;
	rotate_x_axis(data);
}

void	rotate_x_axis(t_data *data)
{
	float	screen_y;
	float	screen_z;

	init_struct_v(data);
	while (data->v.i < data->map.capacity * data->map.size)
	{
		data->v.j = 0;
		while (data->v.j < 1)
		{
			screen_y = ft_newyx(data->mapv[data->v.i][1],
					data->mapv[data->v.i][2], data->rotate_x) + 10;
			screen_z = ft_newzx(data->mapv[data->v.i][1],
					data->mapv[data->v.i][2], data->rotate_x);
			data->mapv[data->v.i][1] = screen_y;
			if (data->zvaluechanger == 0)
				data->mapv[data->v.i][2] = screen_z;
			else
				data->mapv[data->v.i][2] = data->mapv[data->v.i][2];
			data->v.j++;
		}
		data->v.i++;
	}
}
