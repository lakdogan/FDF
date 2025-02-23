/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_auto_xz_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakdogan <lakdogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:53:48 by lakdogan          #+#    #+#             */
/*   Updated: 2025/02/22 08:20:35 by lakdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/fdf_bonus.h"

int	auto_rotate_in_xz(t_data *data, int keycode)
{
	if (keycode == KEYNUMPFIVE)
	{
		if (data->xzautomatic == 0 || data->xzautomatic == 2)
			data->xzautomatic = 1;
		else
			data->xzautomatic = 2;
	}
	return (0);
}

int	auto_rotate_xz(t_data *data)
{
	if (data->xzautomatic == 1)
	{
		rotate_xz_axis_plus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	if (data->xzautomatic == 2)
	{
		rotate_xz_axis_minus(data);
		mlx_destroy_image(data->graphics.mlx_ptr, data->graphics.img);
		print_mapv_mlx(data);
	}
	return (0);
}
