/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_auto_yx_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:53:54 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:20:29 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_yx(t_data *data, int keycode)
{
	if (keycode == KEYNUMFOUR)
	{
		if (data->yxautomatic == 0 || data->yxautomatic == 2)
			data->yxautomatic = 1;
		else
			data->yxautomatic = 2;
	}
	return (0);
}

int	auto_rotate_yx(t_data *data)
{
	if (data->yxautomatic == 1)
	{
		rotate_yx_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->yxautomatic == 2)
	{
		rotate_yx_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
