/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 21:54:46 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/20 22:55:52 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../../../inc/fdf.h"

void	start_drawing(t_data *data)
{
	while (1)
	{
		draw_pixel(data);
		if (data->x0 == data->x1 && data->y0 == data->y1)
			break ;
		data->e2 = 2 * data->err;
		if (data->e2 > -(data->dy))
		{
			data->err -= data->dy;
			data->x0 += data->sx;
		}
		if (data->e2 < data->dx)
		{
			data->err += data->dx;
			data->y0 += data->sy;
		}
	}
}

void	bresenham_drawline(t_data *data)
{
	data->dx = abs(data->x1 - data->x0);
	data->dy = abs(data->y1 - data->y0);
	if (data->x0 < data->x1)
		data->sx = 1;
	else
		data->sx = -1;
	if (data->y0 < data->y1)
		data->sy = 1;
	else
		data->sy = -1;
	data->err = data->dx - data->dy;
	start_drawing(data);
}

void	draw_pixel(t_data *data)
{
	data->final_x = data->x0 + (int)data->offset_x - 0;
	data->final_y = data->y0 + (int)data->offset_y - 0;
	if (data->final_x < 0 || data->final_x >= data->graphics.img_width
		|| data->final_y < 0 || data->final_y >= data->graphics.img_height)
	{
		return ;
	}
	data->dst = data->graphics.img_addr + data->final_y
		* data->graphics.size_line + data->final_x * (data->graphics.bpp / 8);
	*(unsigned int *)data->dst = data->color;
}
