/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_auto_zyx_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:52:47 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:16 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_zyx(t_data *data, int keycode)
{
	if (keycode == KEYEND)
	{
		if (data->zyxautomatic == 0 || data->zyxautomatic == 2)
			data->zyxautomatic = 1;
		else
			data->zyxautomatic = 2;
	}
	return (0);
}

int	auto_rotate_zyx(t_data *data)
{
	if (data->zyxautomatic == 1)
	{
		rotate_zyx_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->zyxautomatic == 2)
	{
		rotate_zyx_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
