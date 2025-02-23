/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_auto_zy_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:53:32 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:20:50 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_zy(t_data *data, int keycode)
{
	if (keycode == KEYFEIGHTTEEN)
	{
		if (data->zyautomatic == 0 || data->zyautomatic == 2)
			data->zyautomatic = 1;
		else
			data->zyautomatic = 2;
	}
	return (0);
}

int	auto_rotate_zy(t_data *data)
{
	if (data->zyautomatic == 1)
	{
		rotate_zy_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->zyautomatic == 2)
	{
		rotate_zy_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
