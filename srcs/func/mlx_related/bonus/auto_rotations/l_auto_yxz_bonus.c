/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_auto_yxz_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:53:14 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:21:03 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_yxz(t_data *data, int keycode)
{
	if (keycode == KEYFEIGHTTEEN)
	{
		if (data->yxzautomatic == 0 || data->yxzautomatic == 2)
			data->yxzautomatic = 1;
		else
			data->yxzautomatic = 2;
	}
	return (0);
}

int	auto_rotate_yxz(t_data *data)
{
	if (data->yxzautomatic == 1)
	{
		rotate_yxz_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->yxzautomatic == 2)
	{
		rotate_yxz_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
