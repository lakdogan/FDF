/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_auto_xy_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:54:00 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:20:25 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_xy(t_data *data, int keycode)
{
	if (keycode == KEYNUMTHREE)
	{
		if (data->xyautomatic == 0 || data->xyautomatic == 2)
			data->xyautomatic = 1;
		else
			data->xyautomatic = 2;
	}
	return (0);
}

int	auto_rotate_xy(t_data *data)
{
	if (data->xyautomatic == 1)
	{
		rotate_xy_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->xyautomatic == 2)
	{
		rotate_xy_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
