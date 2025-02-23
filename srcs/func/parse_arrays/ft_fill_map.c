/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 22:41:51 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/20 21:39:53 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../inc/fdf.h"

// Initialize the structure
// Iterate over the first dimension (i)
// Iterate over the second dimension (j)
// Convert the entire string at the current position into a float
void	fill_map(t_data *data)
{
	init_struct_v(data);
	while (data->line_reader.arr[data->v.i] != NULL)
	{
		data->v.j = 0;
		while (data->line_reader.arr[data->v.i][data->v.j] != NULL)
		{
			data->map.y[data->map.mod - 1][data->v.i] = (float)data->v.i;
			data->map.x[data->map.mod
				- 1][data->v.i][data->v.j] = (float)data->v.j;
			data->map.z[data->map.mod
				- 1][data->v.i][data->v.j]
				= ft_atof(data->line_reader.arr[data->v.i][data->v.j]);
			data->v.j++;
		}
		data->v.i++;
	}
}

void	fill_mapv(t_data *data)
{
	init_struct_v(data);
	while (data->v.i < data->map.capacity * data->map.size)
	{
		data->mapv[data->v.i][0] = data->map.x[0][data->v.j][data->v.k]
			+ data->move_x;
		data->mapv[data->v.i][1] = data->map.y[0][data->v.j] + data->move_y;
		data->mapv[data->v.i][2] = data->map.z[0][data->v.j][data->v.k];
		data->mapv[data->v.i][3]
			= (float)data->map.mapcol[data->v.j][data->v.k][0];
		if (data->mapv[data->v.i][2] > data->max_z)
			data->max_z = data->mapv[data->v.i][2];
		else
			data->min_z = data->mapv[data->v.i][2];
		data->v.k++;
		if (data->v.k == data->map.size)
		{
			data->v.j++;
			data->v.k = 0;
		}
		data->index_counter++;
		data->v.i++;
	}
	free_lines(data);
}
