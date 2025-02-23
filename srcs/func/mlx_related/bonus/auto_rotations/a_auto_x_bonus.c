/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_auto_x_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:54:16 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:19:44 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_x_axis(t_data *data, int keycode)
{
	if (keycode == KEYNUMDOT)
	{
		if (data->xautomatic == 0 || data->xautomatic == 2)
			data->xautomatic = 1;
		else
			data->xautomatic = 2;
	}
	return (0);
}

int	auto_rotate_x(t_data *data)
{
	if (data->xautomatic == 1)
	{
		rotate_x_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->xautomatic == 2)
	{
		rotate_x_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
