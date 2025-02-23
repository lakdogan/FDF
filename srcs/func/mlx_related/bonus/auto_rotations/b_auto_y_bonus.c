/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_auto_y_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:54:11 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 11:25:39 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_y_axis(t_data *data, int keycode)
{
	if (keycode == KEYNUMONE)
	{
		if (data->yautomatic == 0 || data->yautomatic == 2)
			data->yautomatic = 1;
		else
			data->yautomatic = 2;
	}
	return (0);
}

int	auto_rotate_y(t_data *data)
{
	if (data->yautomatic == 1)
	{
		rotate_y_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->yautomatic == 2)
	{
		rotate_y_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
