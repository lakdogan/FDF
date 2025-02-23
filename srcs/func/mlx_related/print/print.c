/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 07:18:12 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 13:21:41 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

void	draw_line_to_right(t_data *data)
{
	data->right_index = data->v.i * data->cols + data->v.j + 1;
	data->x1 = (int)data->mapv[data->right_index][0];
	data->y1 = (int)data->mapv[data->right_index][1];
	bresenham_drawline(data);
}

void	draw_line_to_bottom(t_data *data)
{
	data->bottom_index
		= (data->v.i) * data->cols + data->v.j;
	data->x1 = (int)data->mapv[data->bottom_index][0];
	data->y1 = (int)data->mapv[data->bottom_index][1];
	bresenham_drawline(data);
}

void	draw_line_diagonally(t_data *data)
{
	int	diag_index;

	diag_index = data->index + data->cols + 1;
	data->x1 = (int)data->mapv[diag_index][0];
	data->y1 = (int)data->mapv[diag_index][1];
	bresenham_drawline(data);
}

void	draw_wireframe_man(t_data *data)
{
	data->rows = data->map.capacity;
	data->cols = data->map.size;
	data->v.i = 0;
	while (data->v.i < data->rows - 1)
	{
		data->v.j = 0;
		while (data->v.j < data->cols)
		{
			data->index = data->v.i * data->cols + data->v.j;
			data->x0 = (int)data->mapv[data->index][0];
			data->y0 = (int)data->mapv[data->index][1];
			data->color = (int)data->mapv[data->index][3];
			if (data->v.j < data->cols - 1)
				draw_line_to_right(data);
			if (data->v.i < data->rows - 1 && data->v.j < data->cols - 1)
				draw_line_diagonally(data);
			data->v.j++;
		}
		data->v.i++;
	}
	if ((data->map.capacity > 30 && data->map.capacity < 101)
		|| (data->max_z > 50 && data->map.capacity < 101))
		draw_wireframe_mand(data);
}

void	draw_wireframe_mand(t_data *data)
{
	data->rows = data->map.capacity;
	data->cols = data->map.size;
	data->v.i = 0;
	while (data->v.i < data->rows)
	{
		data->v.j = 0;
		while (data->v.j < data->cols)
		{
			data->index = data->v.i * data->cols + data->v.j;
			data->x0 = (int)data->mapv[data->index][0];
			data->y0 = (int)data->mapv[data->index][1];
			data->color = (int)data->mapv[data->index][3];
			if (data->v.j < data->cols - 1)
				draw_line_to_right(data);
			if (data->v.i < data->rows - 1)
				draw_line_to_bottom(data);
			data->v.j++;
		}
		data->v.i++;
	}
}
