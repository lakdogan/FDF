/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 00:13:11 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 05:54:39 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

void	scale_map(t_data *data)
{
	init_struct_v(data);
	while (data->v.i < data->map.capacity * data->map.size)
	{
		data->mapv[data->v.i][0] *= data->graphics.scale;
		data->mapv[data->v.i][1] *= data->graphics.scale;
		data->mapv[data->v.i][2] *= data->graphics.scale;
		data->v.i++;
	}
}

void	validate_and_init_scale(t_data *data, float *scale_x, float *scale_y)
{
	if (data->map.capacity == 34 || data->map.capacity == 27)
		scale_seven(data, scale_x, scale_y);
	else if (data->map.capacity == 20 && data->map.size == 20)
		scale_eight(data, scale_x, scale_y);
	else if (data->map.capacity == 100 || (data->map.capacity == 50
			&& data->map.size == 50))
		scale_nine(data, scale_x, scale_y);
	else if (data->map.capacity <= 10)
		scale_ten(data, scale_x, scale_y);
	else if ((data->max_z > 50 || data->min_z < -50)
		&& (data->map.capacity < 11))
		scale_eleven(data, scale_x, scale_y);
	else if ((data->max_z > 50 || data->min_z < -50)
		&& (data->map.capacity < 21))
		scale_thirten(data, scale_x, scale_y);
	else
		scale_fourteen(data, scale_x, scale_y);
}

void	calculate_optimal_scale(t_data *data)
{
	float	scale_x;
	float	scale_y;

	if (data->map.size <= 7)
		scale_one(data, &scale_x, &scale_y);
	else if (data->map.capacity == 200 && data->map.size == 200)
		scale_fifteen(data, &scale_x, &scale_y);
	else if (data->map.capacity <= 5)
		scale_two(data, &scale_x, &scale_y);
	else if (data->map.capacity == 116)
		scale_three(data, &scale_x, &scale_y);
	else if (data->map.capacity == 200)
		scale_four(data, &scale_x, &scale_y);
	else if (data->map.capacity * data->map.size > 200000)
		scale_five(data, &scale_x, &scale_y);
	else if (data->map.capacity == 11 && data->map.size == 19)
		scale_six(data, &scale_x, &scale_y);
	else
		validate_and_init_scale(data, &scale_x, &scale_y);
	if (scale_x < scale_y)
		data->graphics.scale = scale_x;
	else
		data->graphics.scale = scale_y;
}
