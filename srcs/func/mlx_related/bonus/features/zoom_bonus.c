/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:12:32 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:48 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_zoom(t_data *data)
{
	if (data->zoomautomatic == 1)
	{
		data->graphics.scale = data->zoom_in;
		scale_map(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
		return (0);
	}
	if (data->zoomautomatic == 3)
	{
		data->graphics.scale = data->zoom_out;
		scale_map(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}

int	zoom_booster(t_data *data)
{
	if (data->zoombooster == 1)
	{
		data->zoom_in = 1.01;
	}
	if (data->zoombooster == 2)
	{
		if (data->zoom_in > 1.03)
			data->zoom_in = 1.01;
		data->zoom_in += 0.01;
	}
	if (data->zoombooster == 3)
	{
		data->zoom_out = 0.99;
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->zoombooster == 4)
	{
		if (data->zoom_out < 0.97)
			data->zoom_out = 0.99;
		data->zoom_out -= 0.01;
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}

int	keyhook_manuel_zoom(t_data *data, int keycode)
{
	if (keycode == KEYONE)
	{
		data->graphics.scale = data->zoom_in;
		scale_map(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
		return (0);
	}
	if (keycode == KEYTWO)
	{
		data->graphics.scale = data->zoom_out;
		scale_map(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}

int	auto_zoom_boost(t_data *data, int keycode)
{
	if (keycode == KEYTHREE)
	{
		data->zoomautomatic = 1;
		if (data->zoomautomatic == 1 && data->zoombooster != 1)
			data->zoombooster = 1;
		else
			data->zoombooster = 2;
	}
	if (keycode == KEYFOUR)
	{
		data->zoomautomatic = 3;
		if (data->zoomautomatic == 3 && data->zoombooster != 3)
			data->zoombooster = 3;
		else
			data->zoombooster = 4;
	}
	return (0);
}
