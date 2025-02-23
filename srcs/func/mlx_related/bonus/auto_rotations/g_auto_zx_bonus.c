/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_auto_zx_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:53:43 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:20:39 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_zx(t_data *data, int keycode)
{
	if (keycode == KEYNUMSIX)
	{
		if (data->zxautomatic == 0 || data->zxautomatic == 2)
			data->zxautomatic = 1;
		else
			data->zxautomatic = 2;
	}
	return (0);
}

int	auto_rotate_zx(t_data *data)
{
	if (data->zxautomatic == 1)
	{
		rotate_zx_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->zxautomatic == 2)
	{
		rotate_zx_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
