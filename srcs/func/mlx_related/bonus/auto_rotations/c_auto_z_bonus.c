/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_auto_z_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:54:06 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:20:21 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_z_axis(t_data *data, int keycode)
{
	if (keycode == KEYNUMTWO)
	{
		if (data->zautomatic == 0 || data->zautomatic == 2)
			data->zautomatic = 1;
		else
			data->zautomatic = 2;
	}
	return (0);
}

int	auto_rotate_z(t_data *data)
{
	if (data->zautomatic == 1)
	{
		rotate_z_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->zautomatic == 2)
	{
		rotate_z_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
