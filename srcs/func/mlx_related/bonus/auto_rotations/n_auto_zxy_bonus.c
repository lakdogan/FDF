/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_auto_zxy_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:52:50 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:12 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_zxy(t_data *data, int keycode)
{
	if (keycode == KEYPAGEDOWN)
	{
		if (data->zxyautomatic == 0 || data->zxyautomatic == 2)
			data->zxyautomatic = 1;
		else
			data->zxyautomatic = 2;
	}
	return (0);
}

int	auto_rotate_zxy(t_data *data)
{
	if (data->zxyautomatic == 1)
	{
		rotate_zxy_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->zxyautomatic == 2)
	{
		rotate_zxy_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
