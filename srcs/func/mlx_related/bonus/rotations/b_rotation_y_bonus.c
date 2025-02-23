/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_rotation_y_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:51:19 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:23:56 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	rotate_y_axis_plus(t_data *data)
{
	data->rotate_y = data->scale_rad;
	rotate_y_axis(data);
}

void	rotate_y_axis_minus(t_data *data)
{
	data->rotate_y = -data->scale_rad;
	rotate_y_axis(data);
}

void	rotate_y_axis(t_data *data)
{
	float	screen_x;
	float	screen_y;

	init_struct_v(data);
	while (data->v.i < data->map.capacity * data->map.size)
	{
		data->v.j = 0;
		while (data->v.j < 1)
		{
			screen_x = ft_newxy(data->mapv[data->v.i][0],
					data->mapv[data->v.i][1], data->rotate_y);
			screen_y = ft_newzy(data->mapv[data->v.i][0],
					data->mapv[data->v.i][1], data->rotate_y);
			data->mapv[data->v.i][0] = screen_x;
			data->mapv[data->v.i][1] = screen_y;
			data->v.j++;
		}
		data->v.i++;
	}
}
