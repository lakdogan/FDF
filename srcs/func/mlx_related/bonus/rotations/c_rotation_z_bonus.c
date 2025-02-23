/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_rotation_z_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:51:42 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:24:01 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

void	rotate_z_axis_minus(t_data *data)
{
	data->rotate_z = -data->scale_rad;
	rotate_z_axis(data);
}

void	rotate_z_axis_plus(t_data *data)
{
	data->rotate_z = data->scale_rad;
	rotate_z_axis(data);
}

void	rotate_z_axis(t_data *data)
{
	float	screen_x;
	float	screen_y;

	init_struct_v(data);
	while (data->v.i < data->map.capacity * data->map.size)
	{
		data->v.j = 0;
		while (data->v.j < 1)
		{
			screen_x = ft_newxz(data->mapv[data->v.i][0],
					data->mapv[data->v.i][1], data->rotate_z);
			screen_y = ft_newyz(data->mapv[data->v.i][0],
					data->mapv[data->v.i][1], data->rotate_z);
			data->mapv[data->v.i][0] = screen_x;
			data->mapv[data->v.i][1] = screen_y;
			data->v.j++;
		}
		data->v.i++;
	}
}
