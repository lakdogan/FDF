/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_offset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:01:46 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 06:41:10 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

void	find_offset(t_data *data)
{
	init_struct_v(data);
	while (data->v.i < data->map.capacity * data->map.size)
	{
		if (data->mapv[data->v.i][0] < data->min_x)
			data->min_x = data->mapv[data->v.i][0];
		if (data->mapv[data->v.i][1] < data->min_y)
			data->min_y = data->mapv[data->v.i][1];
		if (data->mapv[data->v.i][0] > data->max_x)
			data->max_x = data->mapv[data->v.i][0];
		if (data->mapv[data->v.i][1] > data->max_y)
			data->max_y = data->mapv[data->v.i][1];
		data->v.i++;
	}
	data->obj_cent_x = (data->min_x + data->max_x) / 2;
	data->obj_cent_y = (data->min_y + data->max_y) / 2;
	data->img_cent_x = data->graphics.img_width / 2;
	if (data->map.capacity < 21 && data->max_z > 50)
		data->img_cent_y = data->graphics.img_height;
	else
		data->img_cent_y = data->graphics.img_height / 2;
	data->offset_x = data->img_cent_x - data->obj_cent_x;
	data->offset_y = data->img_cent_y - data->obj_cent_y;
}
