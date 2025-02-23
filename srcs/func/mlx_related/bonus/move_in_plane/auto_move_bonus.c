/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_move_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:01:45 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:23:25 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_move_in_x(t_data *data)
{
	if (data->auto_move_x == 1)
	{
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		move_in_x_minus(data);
		print_mapv_mlx(data);
	}
	if (data->auto_move_x == 2)
	{
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		move_in_x_plus(data);
		print_mapv_mlx(data);
	}
	return (0);
}

int	auto_move_in_y(t_data *data)
{
	if (data->auto_move_y == 1)
	{
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		move_in_y_minus(data);
		print_mapv_mlx(data);
	}
	if (data->auto_move_y == 2)
	{
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		move_in_y_plus(data);
		print_mapv_mlx(data);
	}
	return (0);
}

int	switch_ten(t_data *data, int keycode)
{
	if (keycode == KEYUPARROW)
	{
		if (data->auto_move_x == 0 || data->auto_move_x == 2)
			data->auto_move_x = 1;
		else
			data->auto_move_x = 0;
	}
	if (keycode == KEYDOWNARROW)
	{
		if (data->auto_move_x == 0 || data->auto_move_x == 1)
			data->auto_move_x = 2;
		else
			data->auto_move_x = 0;
	}
	return (0);
}

int	switch_eleven(t_data *data, int keycode)
{
	if (keycode == KEYLEFTARROW)
	{
		if (data->auto_move_y == 0 || data->auto_move_y == 2)
			data->auto_move_y = 1;
		else
			data->auto_move_y = 0;
	}
	if (keycode == KEYRIGHTARROW)
	{
		if (data->auto_move_y == 0 || data->auto_move_y == 1)
			data->auto_move_y = 2;
		else
			data->auto_move_y = 0;
	}
	return (0);
}
